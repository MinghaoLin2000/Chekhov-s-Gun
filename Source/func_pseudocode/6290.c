-[PAMediaConversionServiceImageConversionJob adjustmentSidecarDataResourceURL]
NSURL *__cdecl -[PAMediaConversionServiceImageConversionJob adjustmentSidecarDataResourceURL](
        PAMediaConversionServiceImageConversionJob *self,
        SEL a2)
{
  return (NSURL *)-[PAMediaConversionServiceResourceURLCollection resourceURLForRole:](
                    self->_sourceResourceURLCollection,
                    "resourceURLForRole:",
                    CFSTR("PAMediaConversionResourceRoleCompositionSidecarDataFile"));
}