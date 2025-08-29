_NSUnionRange
// local variable allocation has failed, the output may be wrong!
NSRange __cdecl NSUnionRange(NSRange range1, NSRange range2)
{
  NSUInteger location; // x0
  NSUInteger length; // x1
  NSRange v4; // kr00_16
  NSRange result; // 0:x0.16

  v4 = _NSUnionRange(range1, range2);
  length = v4.length;
  location = v4.location;
  result.length = length;
  result.location = location;
  return result;
}