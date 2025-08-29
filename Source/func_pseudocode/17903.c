_CFStringCompare
CFComparisonResult __cdecl CFStringCompare(
        CFStringRef theString1,
        CFStringRef theString2,
        CFStringCompareFlags compareOptions)
{
  return _CFStringCompare(theString1, theString2, compareOptions);
}