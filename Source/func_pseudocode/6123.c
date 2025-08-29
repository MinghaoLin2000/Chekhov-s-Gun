-[PAMediaConversionServiceResourceURLCollection isBlastDoorAccessRequired]
bool __cdecl -[PAMediaConversionServiceResourceURLCollection isBlastDoorAccessRequired](
        PAMediaConversionServiceResourceURLCollection *self,
        SEL a2)
{
  PAMediaConversionServiceResourceURLCollectionAccessProvider *v2; // x19
  unsigned __int8 v3; // w20

  v2 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceResourceURLCollection accessProviderDelegate](self, "accessProviderDelegate"));
  v3 = -[PAMediaConversionServiceResourceURLCollectionAccessProvider isBlastDoorAccessRequired](
         v2,
         "isBlastDoorAccessRequired");
  objc_release(v2);
  return v3;
}