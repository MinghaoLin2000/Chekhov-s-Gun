-[NSString tsu_UTIFilenameExtension]
NSString *__cdecl -[NSString tsu_UTIFilenameExtension](NSString *self, SEL a2)
{
  return (NSString *)-[NSString tsu_UTTypeCopyPreferredTagWithClass:](
                       self,
                       "tsu_UTTypeCopyPreferredTagWithClass:",
                       UTTagClassFilenameExtension);
}