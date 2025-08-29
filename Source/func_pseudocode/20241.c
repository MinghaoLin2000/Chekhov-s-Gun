-[ipp_attribute_t _copySettingGroup:]
id __cdecl -[ipp_attribute_t _copySettingGroup:](ipp_attribute_t *self, SEL a2, int a3)
{
  id result; // x0

  result = -[ipp_attribute_t copyWithZone:](self, "copyWithZone:", 0LL);
  *((_DWORD *)result + 6) = a3;
  return result;
}