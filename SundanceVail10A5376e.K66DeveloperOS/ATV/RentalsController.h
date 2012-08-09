/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRDataQueryController.h"


__attribute__((visibility("hidden")))
@interface RentalsController : BRDataQueryController {
}
- (id)initWithDataClient:(id)dataClient dataClientType:(unsigned long)type;	// 0x7ea41
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x7ef45
- (id)errorForNoContent;	// 0x7ee9d
- (id)indexPathForDataItem:(void *)dataItem;	// 0x7eebd
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x7f4dd
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x7fd79
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x7fc81
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x7f491
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x7efed
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x7f4a1
- (id)newDataQuery;	// 0x7eab9
- (long)numberOfSectionsInList:(id)list;	// 0x7f49d
@end
