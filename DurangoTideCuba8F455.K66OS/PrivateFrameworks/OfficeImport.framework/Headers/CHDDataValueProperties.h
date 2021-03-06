/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "EDKeyedObject.h"

@class OADGraphicProperties, CHDDataLabel, CHDMarker;

__attribute__((visibility("hidden")))
@interface CHDDataValueProperties : NSObject <EDKeyedObject> {
@private
	CHDDataLabel *mDataLabel;	// 4 = 0x4
	CHDMarker *mMarker;	// 8 = 0x8
	unsigned mDataValueIndex;	// 12 = 0xc
	OADGraphicProperties *mGraphicProperties;	// 16 = 0x10
}
@property(retain) id dataLabel;	// G=0x32d0d3f9; S=0x32c945ad; converted property
@property(assign) unsigned dataValueIndex;	// G=0x32c92f35; S=0x32c91a89; converted property
@property(retain) id graphicProperties;	// G=0x32c91b71; S=0x32c91ae9; converted property
@property(retain) id marker;	// G=0x32d0d409; S=0x32c91b25; converted property
+ (id)dataValueProperties;	// 0x32c9456d
- (id)init;	// 0x32c91a49
// converted property getter: - (id)dataLabel;	// 0x32d0d3f9
// converted property getter: - (unsigned)dataValueIndex;	// 0x32c92f35
- (void)dealloc;	// 0x32c947ed
// converted property getter: - (id)graphicProperties;	// 0x32c91b71
- (unsigned)key;	// 0x32c91b61
// converted property getter: - (id)marker;	// 0x32d0d409
// converted property setter: - (void)setDataLabel:(id)label;	// 0x32c945ad
// converted property setter: - (void)setDataValueIndex:(unsigned)index;	// 0x32c91a89
// converted property setter: - (void)setGraphicProperties:(id)properties;	// 0x32c91ae9
// converted property setter: - (void)setMarker:(id)marker;	// 0x32c91b25
- (id)shallowCopyWithIndex:(int)index;	// 0x32c944dd
@end

