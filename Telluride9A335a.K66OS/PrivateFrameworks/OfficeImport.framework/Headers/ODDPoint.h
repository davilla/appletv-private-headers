/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class ODDPointPropertySet, OADTextBody, OADShapeProperties;

__attribute__((visibility("hidden")))
@interface ODDPoint : NSObject {
@private
	int mType;	// 4 = 0x4
	ODDPointPropertySet *mPropertySet;	// 8 = 0x8
	OADShapeProperties *mShapeProperties;	// 12 = 0xc
	OADTextBody *mText;	// 16 = 0x10
}
@property(retain) id text;	// G=0x352f3f7d; S=0x352ef74d; converted property
@property(assign) int type;	// G=0x352f01c1; S=0x352ef0d9; converted property
+ (void)addConnectionToPoint:(id)point order:(unsigned long)order array:(id *)array;	// 0x352eff99
- (id)init;	// 0x352eefcd
- (void)dealloc;	// 0x352f6559
- (id)propertySet;	// 0x352ef109
// converted property setter: - (void)setText:(id)text;	// 0x352ef74d
// converted property setter: - (void)setType:(int)type;	// 0x352ef0d9
- (id)shapeProperties;	// 0x352ef0f9
// converted property getter: - (id)text;	// 0x352f3f7d
// converted property getter: - (int)type;	// 0x352f01c1
@end

