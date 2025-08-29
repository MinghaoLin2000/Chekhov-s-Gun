-[NSURL tsp_matchesURL:]
bool __cdecl -[NSURL tsp_matchesURL:](NSURL *self, SEL a2, id a3)
{
  return -[NSURL tsu_matchesURL:canCompareFileID:](self, "tsu_matchesURL:canCompareFileID:", a3, 1LL);
}