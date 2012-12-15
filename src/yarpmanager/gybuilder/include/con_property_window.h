/*
 *  Yarp Modules Manager
 *  Copyright: 2011 (C) Robotics, Brain and Cognitive Sciences - Italian Institute of Technology (IIT)
 *  Authors: Ali Paikan <ali.paikan@iit.it>
 * 
 *  Copy Policy: Released under the terms of the LGPLv2.1 or later, see LGPL.TXT
 *
 */

#ifndef _CONNECTION_PROPERTY_WINDOW_H_
#define _CONNECTION_PROPERTY_WINDOW_H_

#include <gtkmm.h>
#include "application.h"
#include "manager.h"
#include "arrow_model.h"

class MainWindow;

class ConnectionPropItemColumns : public Gtk::TreeModel::ColumnRecord
{
public:

    ConnectionPropItemColumns() { 
        add(m_col_name); 
        add(m_col_value);
        add(m_col_color_value);
        add(m_col_editable);
    }

    Gtk::TreeModelColumn<Glib::ustring> m_col_name;
    Gtk::TreeModelColumn<Glib::ustring> m_col_value;
    Gtk::TreeModelColumn<Gdk::Color> m_col_color_value;
    Gtk::TreeModelColumn<bool> m_col_editable;
};


class ConnectionPropertyWindow: public Gtk::ScrolledWindow
{
public:
    ConnectionPropertyWindow(MainWindow* parent, Manager* manager);
    virtual ~ConnectionPropertyWindow();

    void onTabCloseRequest();
    void onRefresh();

    void update(Glib::RefPtr<ArrowModel>& arrow);
    void release(void);
    
    Glib::RefPtr<ArrowModel>& getArrow(void) { return m_pArrow; }

protected:
    void onCellData(Gtk::CellRenderer*, const Gtk::TreeModel::iterator& iter);
    void onCellEdited(const Glib::ustring& path_string, 
                    const Glib::ustring& new_text);
protected:
    ConnectionPropItemColumns m_Columns;  
    Glib::RefPtr<Gtk::TreeStore> m_refTreeModel;
    Gtk::TreeView m_TreeView;

private:
    MainWindow* m_pParent;
//    Connection* m_pConnection;
    Manager* m_pManager;
    Glib::RefPtr<ArrowModel> m_pArrow;
};


#endif //_CONNECTION_PROPERTY_WINDOW_H_

