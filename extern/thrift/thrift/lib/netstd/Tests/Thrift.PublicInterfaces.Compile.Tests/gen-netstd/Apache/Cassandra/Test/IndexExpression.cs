/**
 * Autogenerated by Thrift Compiler (0.14.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using System.IO;
using System.Linq;
using System.Threading;
using System.Threading.Tasks;
using Microsoft.Extensions.Logging;
using Thrift;
using Thrift.Collections;
using System.ServiceModel;
using System.Runtime.Serialization;

using Thrift.Protocol;
using Thrift.Protocol.Entities;
using Thrift.Protocol.Utilities;
using Thrift.Transport;
using Thrift.Transport.Client;
using Thrift.Transport.Server;
using Thrift.Processor;


#pragma warning disable IDE0079  // remove unnecessary pragmas
#pragma warning disable IDE1006  // parts of the code use IDL spelling

namespace Apache.Cassandra.Test
{

  [DataContract(Namespace="")]
  public partial class IndexExpression : TBase
  {

    [DataMember(Order = 0)]
    public byte[] Column_name { get; set; }

    /// <summary>
    /// 
    /// <seealso cref="global::Apache.Cassandra.Test.IndexOperator"/>
    /// </summary>
    [DataMember(Order = 0)]
    public global::Apache.Cassandra.Test.IndexOperator Op { get; set; }

    [DataMember(Order = 0)]
    public byte[] Value { get; set; }

    public IndexExpression()
    {
    }

    public IndexExpression(byte[] column_name, global::Apache.Cassandra.Test.IndexOperator op, byte[] @value) : this()
    {
      this.Column_name = column_name;
      this.Op = op;
      this.Value = @value;
    }

    public IndexExpression DeepCopy()
    {
      var tmp44 = new IndexExpression();
      if((Column_name != null))
      {
        tmp44.Column_name = this.Column_name.ToArray();
      }
      tmp44.Op = this.Op;
      if((Value != null))
      {
        tmp44.Value = this.Value.ToArray();
      }
      return tmp44;
    }

    public async global::System.Threading.Tasks.Task ReadAsync(TProtocol iprot, CancellationToken cancellationToken)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        bool isset_column_name = false;
        bool isset_op = false;
        bool isset_value = false;
        TField field;
        await iprot.ReadStructBeginAsync(cancellationToken);
        while (true)
        {
          field = await iprot.ReadFieldBeginAsync(cancellationToken);
          if (field.Type == TType.Stop)
          {
            break;
          }

          switch (field.ID)
          {
            case 1:
              if (field.Type == TType.String)
              {
                Column_name = await iprot.ReadBinaryAsync(cancellationToken);
                isset_column_name = true;
              }
              else
              {
                await TProtocolUtil.SkipAsync(iprot, field.Type, cancellationToken);
              }
              break;
            case 2:
              if (field.Type == TType.I32)
              {
                Op = (global::Apache.Cassandra.Test.IndexOperator)await iprot.ReadI32Async(cancellationToken);
                isset_op = true;
              }
              else
              {
                await TProtocolUtil.SkipAsync(iprot, field.Type, cancellationToken);
              }
              break;
            case 3:
              if (field.Type == TType.String)
              {
                Value = await iprot.ReadBinaryAsync(cancellationToken);
                isset_value = true;
              }
              else
              {
                await TProtocolUtil.SkipAsync(iprot, field.Type, cancellationToken);
              }
              break;
            default: 
              await TProtocolUtil.SkipAsync(iprot, field.Type, cancellationToken);
              break;
          }

          await iprot.ReadFieldEndAsync(cancellationToken);
        }

        await iprot.ReadStructEndAsync(cancellationToken);
        if (!isset_column_name)
        {
          throw new TProtocolException(TProtocolException.INVALID_DATA);
        }
        if (!isset_op)
        {
          throw new TProtocolException(TProtocolException.INVALID_DATA);
        }
        if (!isset_value)
        {
          throw new TProtocolException(TProtocolException.INVALID_DATA);
        }
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public async global::System.Threading.Tasks.Task WriteAsync(TProtocol oprot, CancellationToken cancellationToken)
    {
      oprot.IncrementRecursionDepth();
      try
      {
        var struc = new TStruct("IndexExpression");
        await oprot.WriteStructBeginAsync(struc, cancellationToken);
        var field = new TField();
        if((Column_name != null))
        {
          field.Name = "column_name";
          field.Type = TType.String;
          field.ID = 1;
          await oprot.WriteFieldBeginAsync(field, cancellationToken);
          await oprot.WriteBinaryAsync(Column_name, cancellationToken);
          await oprot.WriteFieldEndAsync(cancellationToken);
        }
        field.Name = "op";
        field.Type = TType.I32;
        field.ID = 2;
        await oprot.WriteFieldBeginAsync(field, cancellationToken);
        await oprot.WriteI32Async((int)Op, cancellationToken);
        await oprot.WriteFieldEndAsync(cancellationToken);
        if((Value != null))
        {
          field.Name = "value";
          field.Type = TType.String;
          field.ID = 3;
          await oprot.WriteFieldBeginAsync(field, cancellationToken);
          await oprot.WriteBinaryAsync(Value, cancellationToken);
          await oprot.WriteFieldEndAsync(cancellationToken);
        }
        await oprot.WriteFieldStopAsync(cancellationToken);
        await oprot.WriteStructEndAsync(cancellationToken);
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override bool Equals(object that)
    {
      if (!(that is IndexExpression other)) return false;
      if (ReferenceEquals(this, other)) return true;
      return TCollections.Equals(Column_name, other.Column_name)
        && System.Object.Equals(Op, other.Op)
        && TCollections.Equals(Value, other.Value);
    }

    public override int GetHashCode() {
      int hashcode = 157;
      unchecked {
        if((Column_name != null))
        {
          hashcode = (hashcode * 397) + Column_name.GetHashCode();
        }
        hashcode = (hashcode * 397) + Op.GetHashCode();
        if((Value != null))
        {
          hashcode = (hashcode * 397) + Value.GetHashCode();
        }
      }
      return hashcode;
    }

    public override string ToString()
    {
      var sb = new StringBuilder("IndexExpression(");
      if((Column_name != null))
      {
        sb.Append(", Column_name: ");
        Column_name.ToString(sb);
      }
      sb.Append(", Op: ");
      Op.ToString(sb);
      if((Value != null))
      {
        sb.Append(", Value: ");
        Value.ToString(sb);
      }
      sb.Append(')');
      return sb.ToString();
    }
  }

}