-[PAMediaConversionServiceResourceURLCollection isEqual:]
bool __cdecl -[PAMediaConversionServiceResourceURLCollection isEqual:](
        PAMediaConversionServiceResourceURLCollection *self,
        SEL a2,
        id a3)
{
  NSMutableDictionary *urlReferencesByRole; // x19
  void *v4; // x20

  urlReferencesByRole = self->_urlReferencesByRole;
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "urlReferencesByRole"));
  LOBYTE(urlReferencesByRole) = (unsigned __int8)-[NSMutableDictionary isEqual:](urlReferencesByRole, "isEqual:", v4);
  objc_release(v4);
  return (char)urlReferencesByRole;
}