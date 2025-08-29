__ZN6google8protobuf2io17SafeDoubleToFloatEd
float __fastcall google::protobuf::io::SafeDoubleToFloat(google::protobuf::io *this, double a2)
{
  if ( a2 <= 3.40282347e38 )
  {
    if ( a2 >= -3.40282347e38 )
      return a2;
    if ( a2 >= -3.40282357e38 )
      return -3.4028e38;
    else
      return -INFINITY;
  }
  else if ( a2 <= 3.40282357e38 )
  {
    return 3.4028e38;
  }
  else
  {
    return INFINITY;
  }
}