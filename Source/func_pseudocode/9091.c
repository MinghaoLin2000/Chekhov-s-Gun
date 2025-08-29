-[NSURL tsp_isIWorkAVAssetURL]
bool __cdecl -[NSURL tsp_isIWorkAVAssetURL](NSURL *self, SEL a2)
{
  NSString *v2; // x19
  unsigned __int8 v3; // w20

  v2 = objc_retainAutoreleasedReturnValue(-[NSURL scheme](self, "scheme"));
  v3 = -[NSString isEqualToString:](v2, "isEqualToString:", CFSTR("iWorkAVAsset"));
  objc_release(v2);
  return v3;
}