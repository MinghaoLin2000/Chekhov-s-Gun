-[ipp_t initWithCoder:]
ipp_t *__cdecl -[ipp_t initWithCoder:](ipp_t *self, SEL a2, id a3)
{
  id v4; // x19
  __int64 v5; // x1
  void *v6; // x21
  ipp_t *v7; // x20

  v4 = objc_retain(a3);
  v6 = objc_retainAutoreleasedReturnValue(
         objc_msgSend(
           v4,
           "decodeObjectOfClass:forKey:",
           objc_opt_class(&OBJC_CLASS___NSData, v5),
           CFSTR("_dataRepresentation")));
  v7 = -[ipp_t initWithData:](self, "initWithData:", v6);
  objc_release(v6);
  objc_release(v4);
  return v7;
}