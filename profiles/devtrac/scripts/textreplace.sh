 #!/bin/sh
 
 grep -rl 'vocabulary_1' ../modules | xargs sed -i 's/vocabulary_1/location_type/g'
 grep -rl 'vocabulary_1' ../test | xargs sed -i 's/vocabulary_1/location_type/g'
 grep -rl 'vocabulary_1' ../themes | xargs sed -i 's/vocabulary_1/location_type/g'

 grep -rl 'vocabulary_4' ../modules | xargs sed -i 's/vocabulary_4/department/g'
 grep -rl 'vocabulary_4' ../test | xargs sed -i 's/vocabulary_4/department/g'
 grep -rl 'vocabulary_4' ../themes | xargs sed -i 's/vocabulary_4/department/g'

 grep -rl 'vocabulary_5' ../modules | xargs sed -i 's/vocabulary_5/function/g'
 grep -rl 'vocabulary_5' ../test | xargs sed -i 's/vocabulary_5/function/g'
 grep -rl 'vocabulary_5' ../themes | xargs sed -i 's/vocabulary_5/function/g'

 grep -rl 'vocabulary_6' ../modules | xargs sed -i 's/vocabulary_6/iati_custom_admin_unit/g'
 grep -rl 'vocabulary_6' ../test  | xargs sed -i 's/vocabulary_6/iati_custom_admin_unit/g'
 grep -rl 'vocabulary_6' ../themes  | xargs sed -i 's/vocabulary_6/iati_custom_admin_unit/g'

 grep -rl 'vocabulary_7' ../modules | xargs sed -i 's/vocabulary_7/site_report_type/g'
 grep -rl 'vocabulary_7' ../test  | xargs sed -i 's/vocabulary_7/site_report_type/g'
 grep -rl 'vocabulary_7' ../themes  | xargs sed -i 's/vocabulary_7/site_report_type/g'

 grep -rl 'vocabulary_8' ../modules | xargs sed -i 's/vocabulary_8/iati_activity_sector/g'
 grep -rl 'vocabulary_8' ../test  | xargs sed -i 's/vocabulary_8/iati_activity_sector/g'
 grep -rl 'vocabulary_8' ../themes  | xargs sed -i 's/vocabulary_8/iati_activity_sector/g'

 grep -rl 'vocabulary_9' ../modules | xargs sed -i 's/vocabulary_9/purpose/g'
 grep -rl 'vocabulary_9' ../test  | xargs sed -i 's/vocabulary_9/purpose/g'
 grep -rl 'vocabulary_9' ../themes  | xargs sed -i 's/vocabulary_9/purpose/g'
 

 grep -rl 'vocabulary-1' ../modules | xargs sed -i 's/vocabulary-1/location-type/g'
 grep -rl 'vocabulary-1' ../test | xargs sed -i 's/vocabulary-1/location-type/g'
 grep -rl 'vocabulary-1' ../themes | xargs sed -i 's/vocabulary-1/location-type/g'

 grep -rl 'vocabulary-4' ../modules | xargs sed -i 's/vocabulary-4/department/g'
 grep -rl 'vocabulary-4' ../test | xargs sed -i 's/vocabulary-4/department/g'
  grep -rl 'vocabulary-4' ../themes | xargs sed -i 's/vocabulary-4/department/g'

 grep -rl 'vocabulary-5' ../modules | xargs sed -i 's/vocabulary-5/function/g'
 grep -rl 'vocabulary-5' ../test | xargs sed -i 's/vocabulary-5/function/g'
 grep -rl 'vocabulary-5' ../themes | xargs sed -i 's/vocabulary-5/function/g'

 grep -rl 'vocabulary-6' ../modules | xargs sed -i 's/vocabulary-6/iati-custom-admin-unit/g'
 grep -rl 'vocabulary-6' ../test  | xargs sed -i 's/vocabulary-6/iati-custom-admin-unit/g'
 grep -rl 'vocabulary-6' ../themes  | xargs sed -i 's/vocabulary-6/iati-custom-admin-unit/g'

 grep -rl 'vocabulary-7' ../modules | xargs sed -i 's/vocabulary-7/site-report-type/g'
 grep -rl 'vocabulary-7' ../test  | xargs sed -i 's/vocabulary-7/site-report-type/g'
 grep -rl 'vocabulary-7' ../themes  | xargs sed -i 's/vocabulary-7/site-report-type/g'

 grep -rl 'vocabulary-8' ../modules | xargs sed -i 's/vocabulary-8/iati-activity-sector/g'
 grep -rl 'vocabulary-8' ../test  | xargs sed -i 's/vocabulary-8/iati-activity-sector/g'
 grep -rl 'vocabulary-8' ../themes  | xargs sed -i 's/vocabulary-8/iati-activity-sector/g'

 grep -rl 'vocabulary-9' ../modules | xargs sed -i 's/vocabulary-9/purpose/g'
 grep -rl 'vocabulary-9' ../test  | xargs sed -i 's/vocabulary-9/purpose/g'
 grep -rl 'vocabulary-9' ../themes  | xargs sed -i 's/vocabulary-9/purpose/g'
 
 grep -rl 'iteviisit' ../modules | xargs sed -i 's/iteviisit/itevisit/g'
 
 grep -rl 'district_category' ../modules | xargs sed -i 's/district_category/field_district_tags/g'
 grep -rl 'district_category' ../test  | xargs sed -i 's/district_category/field_district_tags/g'
 grep -rl 'district_category' ../themes  | xargs sed -i 's/district_category/field_district_tags/g'

 grep -rl 'district-category' ../modules | xargs sed -i 's/district-category/field-district-tags/g'
 grep -rl 'district-category' ../test  | xargs sed -i 's/district-category/field-district-tags/g'
 grep -rl 'district-category' ../themes  | xargs sed -i 's/district-category/field-district-tags/g'
 
 grep -rl 'field_ftritem_public_summary' ../modules | xargs sed -i 's/field_ftritem_public_summary/field_ftritem_report/g'
 grep -rl 'field_ftritem_public_summary' ../test  | xargs sed -i 's/field_ftritem_public_summary/field_ftritem_report/g'
 grep -rl 'field_ftritem_public_summary' ../themes  | xargs sed -i 's/field_ftritem_public_summary/field_ftritem_report/g'

 grep -rl 'field_ftritem_narrative' ../modules | xargs sed -i 's/field_ftritem_narrative/field_ftritem_notes/g'
 grep -rl 'field_ftritem_narrative' ../test  | xargs sed -i 's/field_ftritem_narrative/field_ftritem_notes/g'
 grep -rl 'field_ftritem_narrative' ../themes  | xargs sed -i 's/field_ftritem_narrative/field_ftritem_notes/g'

 
	