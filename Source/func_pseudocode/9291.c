-[TSPDocumentRevision isEqual:]
bool __cdecl -[TSPDocumentRevision isEqual:](TSPDocumentRevision *self, SEL a2, id a3)
{
  id v4; // x19
  __int64 v5; // x0
  id v6; // x20
  int sequence; // w22
  NSUUID *identifier; // x21
  void *v9; // x22
  unsigned __int8 v10; // w21

  v4 = objc_retain(a3);
  v5 = objc_opt_class(&OBJC_CLASS___TSPDocumentRevision);
  if ( (objc_opt_isKindOfClass(v4, v5) & 1) != 0 )
  {
    v6 = objc_retain(v4);
    sequence = self->_sequence;
    if ( sequence == (unsigned int)objc_msgSend(v6, "sequence") )
    {
      identifier = self->_identifier;
      v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "identifier"));
      v10 = (unsigned __int8)-[NSUUID isEqual:](identifier, "isEqual:", v9);
      objc_release(v9);
    }
    else
    {
      v10 = 0;
    }
    objc_release(v6);
  }
  else
  {
    v10 = 0;
  }
  objc_release(v4);
  return v10;
}