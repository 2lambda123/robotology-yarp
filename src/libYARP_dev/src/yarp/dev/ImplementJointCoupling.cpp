/*
 * SPDX-FileCopyrightText: 2006-2023 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */


#include "ImplementJointCoupling.h"
#include <algorithm>


using namespace yarp::dev;


void ImplementJointCoupling::initialise(yarp::sig::VectorOf<size_t> physical_joints,
                                        yarp::sig::VectorOf<size_t> actuated_axes,
                                        std::vector<std::string> physical_joint_names,
                                        std::vector<std::string> actuated_axes_names,
                                        std::vector<std::pair<double, double>> physical_joint_limits)
{
    m_physicalJoints     = physical_joints;
    m_actuatedAxes       = actuated_axes;
    m_physicalJointNames = physical_joint_names;
    m_actuatedAxesNames  = actuated_axes_names;
    // Configure a map between physical joints and limits
    for (std::size_t i = 0, j = 0; i < physical_joints.size(); i++)
    {
        const int physical_joint_index = physical_joints(i);
        std::string physical_joint_name {""};
        auto ok = getPhysicalJointName(physical_joint_index, physical_joint_name);
        if (physical_joint_name != "invalid" && physical_joint_name != "reserved")
        {
            m_physicalJointLimits[physical_joints[i]] = physical_joint_limits[j];
            j++;
        }
    }


}

bool ImplementJointCoupling::getCoupledPhysicalJoints(yarp::sig::VectorOf<size_t>& coupPhysJointsIndexes) {
    coupPhysJointsIndexes = m_physicalJoints;
    return true;
}

bool ImplementJointCoupling::getCoupledActuatedAxes(yarp::sig::VectorOf<size_t>& coupActAxesIndexes) {
    coupActAxesIndexes = m_actuatedAxes;
    return true;
}

bool ImplementJointCoupling::getPhysicalJointName(size_t physicalJointIndex, std::string& physicalJointName){
    int c_joint = -1;
    // TODO refactor also here
    for (size_t i = 0; i < m_physicalJoints.size(); ++i)
    {
        if (m_physicalJoints[i]==physicalJointIndex) c_joint = i;
    }

    if (c_joint >= 0 && static_cast<size_t>(c_joint) < m_physicalJoints.size())
    {
        physicalJointName = m_physicalJointNames[c_joint];
        return true;
    }
    else
    {
        physicalJointName = "invalid";
        return false;
    }
}

bool ImplementJointCoupling::getActuatedAxisName(size_t actuatedAxisIndex, std::string& actuatedAxisName){
    // TODO is it right?
    actuatedAxisName = m_actuatedAxesNames[actuatedAxisIndex];
    return true;
}

bool ImplementJointCoupling::checkPhysicalJointIsCoupled(size_t physicalJointIndex){
    return std::find(m_physicalJoints.begin(), m_physicalJoints.end(), physicalJointIndex) != m_physicalJoints.end();
}

bool ImplementJointCoupling::getPhysicalJointLimits(size_t physicalJointIndex, double& min, double& max){
    std::string physical_joint_name{""};
    auto ok = getPhysicalJointName(physicalJointIndex, physical_joint_name);

    if (physical_joint_name != "reserved" && physical_joint_name != "invalid")
    {
        min = m_physicalJointLimits.at(physicalJointIndex).first;
        max = m_physicalJointLimits.at(physicalJointIndex).second;
        return true;
    }
    return false;
}
