_NSSizeFromString
NSSize __cdecl NSSizeFromString(NSString *aString)
{
  double width; // d0
  double height; // d1
  NSSize v3; // kr00_16
  NSSize result; // 0:d0.8,8:d1.8

  v3 = _NSSizeFromString(aString);
  height = v3.height;
  width = v3.width;
  result.height = height;
  result.width = width;
  return result;
}