/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRSelectionHandler.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVFlickrSaveRemoveSearchSelectionHandler : NSObject <BRSelectionHandler> {
@private
	NSString *_searchTerm;	// 4 = 0x4
}
+ (id)selectionHandlerWithSearchTerm:(id)searchTerm;	// 0x3065e46d
- (id)initWithSearchTerm:(id)searchTerm;	// 0x3065e445
- (void)dealloc;	// 0x3065e8e5
- (BOOL)handleSelectionForControl:(id)control;	// 0x3065fa11
@end

