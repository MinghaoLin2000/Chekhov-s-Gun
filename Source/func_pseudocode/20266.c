-[ipp_t isEqual:]
bool __cdecl -[ipp_t isEqual:](ipp_t *self, SEL a2, id a3)
{
  id v4; // x19
  id v5; // x20
  void *v6; // x21
  unsigned __int8 v7; // w22

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[ipp_t dataRepresentation](self, "dataRepresentation"));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "dataRepresentation"));
  v7 = (unsigned __int8)objc_msgSend(v5, "isEqual:", v6);
  objc_release(v6);
  objc_release(v5);
  objc_release(v4);
  return v7;
}