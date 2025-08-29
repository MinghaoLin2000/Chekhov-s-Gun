-[AutofillNode isPlaylist]
bool __cdecl -[AutofillNode isPlaylist](AutofillNode *self, SEL a2)
{
  return -[AutofillNode kind](self, "kind") == 0;
}