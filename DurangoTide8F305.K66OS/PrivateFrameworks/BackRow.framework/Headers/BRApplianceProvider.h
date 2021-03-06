/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library
#import "BRProvider.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface BRApplianceProvider : NSObject <BRProvider> {
@private
	NSArray *_applianceInfo;	// 4 = 0x4
}
- (id)init;	// 0x329df489
- (void)_loadAppliances;	// 0x329df109
- (id)applianceInfoAtIndex:(long)index;	// 0x329df3d1
- (long)applianceInfoIndexForKey:(id)key;	// 0x329df341
- (id)controlFactory;	// 0x329df321
- (id)dataAtIndex:(long)index;	// 0x329df2e1
- (long)dataCount;	// 0x329df301
- (void)dealloc;	// 0x329df419
- (id)hashForDataAtIndex:(long)index;	// 0x329df2b1
- (void)reloadAppliances;	// 0x329df29d
@end

