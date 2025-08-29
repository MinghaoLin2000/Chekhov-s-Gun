_CFURLCreateStringByAddingPercentEscapes
CFStringRef __cdecl CFURLCreateStringByAddingPercentEscapes(
        CFAllocatorRef allocator,
        CFStringRef originalString,
        CFStringRef charactersToLeaveUnescaped,
        CFStringRef legalURLCharactersToBeEscaped,
        CFStringEncoding encoding)
{
  return _CFURLCreateStringByAddingPercentEscapes(
           allocator,
           originalString,
           charactersToLeaveUnescaped,
           legalURLCharactersToBeEscaped,
           encoding);
}