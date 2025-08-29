-[ipp_t copyWithZone:]
id __cdecl -[ipp_t copyWithZone:](ipp_t *self, SEL a2, _NSZone *a3)
{
  id v4; // x19
  __int64 v5; // x1
  void *v6; // x20

  v4 = objc_retainAutoreleasedReturnValue(-[ipp_t dataRepresentation](self, "dataRepresentation", a3));
  v6 = objc_msgSend(objc_alloc((Class)objc_opt_class(self, v5)), "initWithData:", v4);
  objc_release(v4);
  return v6;
}