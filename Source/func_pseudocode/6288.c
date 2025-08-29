-[PAMediaConversionServiceImageConversionJob canAccessSourceImageProperties]
bool __cdecl -[PAMediaConversionServiceImageConversionJob canAccessSourceImageProperties](
        PAMediaConversionServiceImageConversionJob *self,
        SEL a2)
{
  return !-[PAMediaConversionServiceImageConversionJob sourceRequiresRasterization](self, "sourceRequiresRasterization");
}