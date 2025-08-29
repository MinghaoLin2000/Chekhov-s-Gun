-[TSPDocumentRevision hash]
unsigned __int64 __cdecl -[TSPDocumentRevision hash](TSPDocumentRevision *self, SEL a2)
{
  __int64 sequence; // x19

  sequence = self->_sequence;
  return (unsigned __int64)-[NSUUID hash](self->_identifier, "hash") ^ sequence;
}