-[ATXHeuristicJSEnv _cityNameFromAirportCode:]
id __cdecl -[ATXHeuristicJSEnv _cityNameFromAirportCode:](ATXHeuristicJSEnv *self, SEL a2, id a3)
{
  void *v3; // x19
  void *v4; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(+[ATXHeuristicAirportCity cityForAirport:](&OBJC_CLASS___ATXHeuristicAirportCity, "cityForAirport:", a3));
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "name"));
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}