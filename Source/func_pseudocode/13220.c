-[SFUFileOutputStream close]
void __cdecl -[SFUFileOutputStream close](SFUFileOutputStream *self, SEL a2)
{
  FILE *mFile; // x0

  mFile = self->mFile;
  if ( mFile )
  {
    fclose(mFile);
    self->mFile = 0LL;
  }
}