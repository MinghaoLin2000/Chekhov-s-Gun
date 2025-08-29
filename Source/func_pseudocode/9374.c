-[TSPDatabase needsUpgradeFromSchemaVersion:]
bool __cdecl -[TSPDatabase needsUpgradeFromSchemaVersion:](TSPDatabase *self, SEL a2, int a3)
{
  return a3 < 5;
}