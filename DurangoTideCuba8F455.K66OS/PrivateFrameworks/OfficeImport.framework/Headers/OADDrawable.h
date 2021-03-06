/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class OADDrawableProperties;
@protocol OADDrawableContainer, OADClient;

__attribute__((visibility("hidden")))
@interface OADDrawable : NSObject {
@private
	BOOL mHidden;	// 4 = 0x4
	unsigned mId;	// 8 = 0x8
	OADDrawableProperties *mDrawableProperties;	// 12 = 0xc
	id<OADClient> mClientData;	// 16 = 0x10
	OADDrawable<OADDrawableContainer> *mParent;	// 20 = 0x14
}
@property(retain) id clientData;	// G=0x32b16c7d; S=0x32b8db5d; converted property
@property(retain) id drawableProperties;	// G=0x32b16cf9; S=0x32b88f11; converted property
@property(assign) BOOL hidden;	// G=0x32b1762d; S=0x32b8e205; converted property
@property(assign) unsigned long id;	// G=0x32c10765; S=0x32b85ab1; converted property
@property(retain) id parent;	// G=0x32b16de1; S=0x32b8fc41; converted property
- (id)initWithPropertiesClass:(Class)propertiesClass;	// 0x32b850d5
// converted property getter: - (id)clientData;	// 0x32b16c7d
- (id)createOrientedBoundsWithBounds:(CGRect)bounds;	// 0x32cd39ad
- (id)createWordClientDataWithTextType:(int)textType;	// 0x32d1c7f1
- (void)dealloc;	// 0x32b13409
// converted property getter: - (id)drawableProperties;	// 0x32b16cf9
- (id)ensureClientDataOfClass:(Class)aClass;	// 0x32c74dc9
// converted property getter: - (BOOL)hidden;	// 0x32b1762d
// converted property getter: - (unsigned long)id;	// 0x32c10765
// converted property getter: - (id)parent;	// 0x32b16de1
- (void)removeUnnecessaryOverrides;	// 0x32b94551
// converted property setter: - (void)setClientData:(id)data;	// 0x32b8db5d
// converted property setter: - (void)setDrawableProperties:(id)properties;	// 0x32b88f11
// converted property setter: - (void)setHidden:(BOOL)hidden;	// 0x32b8e205
// converted property setter: - (void)setId:(unsigned long)anId;	// 0x32b85ab1
// converted property setter: - (void)setParent:(id)parent;	// 0x32b8fc41
- (void)setParentTextListStyle:(id)style;	// 0x32cd39a9
@end

