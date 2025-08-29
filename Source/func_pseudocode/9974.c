__ZN3TSP43SupportMetadata_DataCollaborationProperties8CopyFromERKN6google8protobuf7MessageE
TSP::SupportMetadata_DataCollaborationProperties *__fastcall TSP::SupportMetadata_DataCollaborationProperties::CopyFrom(
        TSP::SupportMetadata_DataCollaborationProperties *this,
        const google::protobuf::Message *a2)
{
  __int64 v2; // x30
  TSP::SupportMetadata_DataCollaborationProperties *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    TSP::SupportMetadata_DataCollaborationProperties::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (TSP::SupportMetadata_DataCollaborationProperties *)TSP::SupportMetadata_DataCollaborationProperties::MergeFrom(
                                                                 v4,
                                                                 a2);
  }
  return this;
}