-[ipp_t hash]
unsigned __int64 __cdecl -[ipp_t hash](ipp_t *self, SEL a2)
{
  id v2; // x19
  void *v3; // x20

  v2 = objc_retainAutoreleasedReturnValue(-[ipp_t dataRepresentation](self, "dataRepresentation"));
  v3 = objc_msgSend(v2, "hash");
  objc_release(v2);
  return (unsigned __int64)v3;
}