-[TSPPackage checkPassword:]
bool __cdecl -[TSPPackage checkPassword:](TSPPackage *self, SEL a2, id a3)
{
  id v4; // x19
  NSData *v5; // x20
  id v6; // x21
  bool v7; // w22

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[TSPPackage passwordVerifier](self, "passwordVerifier"));
  v6 = objc_retainAutoreleasedReturnValue(-[TSPPackage keyFromPassword:passwordVerifier:](self, "keyFromPassword:passwordVerifier:", v4, v5));
  if ( v6 )
    v7 = +[SFUCryptoUtils checkKey:againstPassphraseVerifier:](
           &OBJC_CLASS___SFUCryptoUtils,
           "checkKey:againstPassphraseVerifier:",
           v6,
           v5);
  else
    v7 = 0;
  objc_release(v6);
  objc_release(v5);
  objc_release(v4);
  return v7;
}