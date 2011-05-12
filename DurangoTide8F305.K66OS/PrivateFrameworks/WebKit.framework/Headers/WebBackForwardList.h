/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"

@class WebBackForwardListPrivate;

@interface WebBackForwardList : NSObject {
@private
	WebBackForwardListPrivate *_private;	// 4 = 0x4
}
@property(assign) int capacity;	// G=0x33febd2d; S=0x33febd0d; converted property
@property(assign) unsigned pageCacheSize;	// G=0x33febb0d; S=0x33febb49; converted property
+ (void)initialize;	// 0x33fc83e1
- (id)init;	// 0x33fec5c5
- (id)initWithBackForwardList:(PassRefPtr<WebCore::BackForwardList>)backForwardList;	// 0x33fc83ed
- (void)_close;	// 0x33fec4b5
- (void)addItem:(id)item;	// 0x33fec341
- (id)backItem;	// 0x33fde90d
- (int)backListCount;	// 0x33febaf1
- (id)backListWithLimit:(int)limit;	// 0x33febe4d
// converted property getter: - (int)capacity;	// 0x33febd2d
- (BOOL)containsItem:(id)item;	// 0x33febfe9
- (id)currentItem;	// 0x33fc84b5
- (void)dealloc;	// 0x33fcb5a9
- (id)description;	// 0x33febb81
- (id)dictionaryRepresentation;	// 0x33fdcf25
- (void)finalize;	// 0x33fec4d1
- (id)forwardItem;	// 0x33febf51
- (int)forwardListCount;	// 0x33febad5
- (id)forwardListWithLimit:(int)limit;	// 0x33febd49
- (void)goBack;	// 0x33febfcd
- (void)goForward;	// 0x33febfb1
- (void)goToItem:(id)item;	// 0x33febf8d
- (id)itemAtIndex:(int)index;	// 0x33feba95
// converted property getter: - (unsigned)pageCacheSize;	// 0x33febb0d
- (void)removeItem:(id)item;	// 0x33fec31d
// converted property setter: - (void)setCapacity:(int)capacity;	// 0x33febd0d
// converted property setter: - (void)setPageCacheSize:(unsigned)size;	// 0x33febb49
- (void)setToMatchDictionaryRepresentation:(id)matchDictionaryRepresentation;	// 0x33fec011
@end

