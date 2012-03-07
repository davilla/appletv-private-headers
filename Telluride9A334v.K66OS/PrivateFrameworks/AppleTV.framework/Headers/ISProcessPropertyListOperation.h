/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"

@class ISPropertyListProvider, NSDictionary;

__attribute__((visibility("hidden")))
@interface ISProcessPropertyListOperation : ISOperation {
@private
	ISPropertyListProvider *_dataProvider;	// 60 = 0x3c
	NSDictionary *_propertyList;	// 64 = 0x40
}
@property(retain) ISPropertyListProvider *dataProvider;	// G=0x33352581; S=0x33352595; @synthesize=_dataProvider
- (id)initWithPropertyList:(id)propertyList;	// 0x3335242d
// declared property getter: - (id)dataProvider;	// 0x33352581
- (void)dealloc;	// 0x3335249d
- (void)run;	// 0x33352515
// declared property setter: - (void)setDataProvider:(id)provider;	// 0x33352595
@end
