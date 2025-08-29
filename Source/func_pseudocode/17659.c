-[ModelKeyServerAPIFetchKeyResult StringAsKey:]
int __cdecl -[ModelKeyServerAPIFetchKeyResult StringAsKey:](ModelKeyServerAPIFetchKeyResult *self, SEL a2, id a3)
{
  id v3; // x19
  int v4; // w20

  v3 = objc_retain(objc_retain(a3));
  if ( ((unsigned int)objc_msgSend(v3, "isEqualToString:", CFSTR("PBUNSET")) & 1) != 0 )
  {
    v4 = 0;
  }
  else if ( ((unsigned int)objc_msgSend(v3, "isEqualToString:", CFSTR("signed_key")) & 1) != 0 )
  {
    v4 = 1;
  }
  else if ( (unsigned int)objc_msgSend(v3, "isEqualToString:", CFSTR("raw_key")) )
  {
    v4 = 2;
  }
  else
  {
    v4 = 0;
  }
  objc_release(v3);
  objc_release(v3);
  return v4;
}