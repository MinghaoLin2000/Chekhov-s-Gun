+[SFUCryptoUtils isEncryptionVersionAndFormatSupportedInPassphraseVerifier:]
bool __cdecl +[SFUCryptoUtils isEncryptionVersionAndFormatSupportedInPassphraseVerifier:](id a1, SEL a2, id a3)
{
  unsigned __int16 *v4; // x19

  v4 = (unsigned __int16 *)objc_msgSend(a3, "bytes");
  return (unsigned __int64)objc_msgSend(a3, "length") >= 4 && (unsigned int)*v4 - 1 <= 1 && v4[1] == 1;
}