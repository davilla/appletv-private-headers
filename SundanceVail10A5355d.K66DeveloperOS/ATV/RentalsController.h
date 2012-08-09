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
- (id)initWithDataClient:(id)dataClient dataClientType:(unsigned long)type;	// 0x7c581
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x7ca85
- (id)errorForNoContent;	// 0x7c9dd
- (id)indexPathForDataItem:(void *)dataItem;	// 0x7c9fd
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x7d01d
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x7d8b9
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x7d7c1
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x7cfd1
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x7cb2d
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x7cfe1
- (id)newDataQuery;	// 0x7c5f9
- (long)numberOfSectionsInList:(id)list;	// 0x7cfdd
@end
