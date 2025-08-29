_CFStringTokenizerGetCurrentTokenRange
// local variable allocation has failed, the output may be wrong!
CFRange __cdecl CFStringTokenizerGetCurrentTokenRange(CFStringTokenizerRef tokenizer)
{
  CFIndex location; // x0
  CFIndex length; // x1
  CFRange CurrentTokenRange; // kr00_16
  CFRange result; // 0:x0.16

  CurrentTokenRange = _CFStringTokenizerGetCurrentTokenRange(tokenizer);
  length = CurrentTokenRange.length;
  location = CurrentTokenRange.location;
  result.length = length;
  result.location = location;
  return result;
}