/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OCPPackagePart, NSMutableDictionary, NSMutableSet, OAXDrawingState;

__attribute__((visibility("hidden")))
@interface OAVState : NSObject {
@private
	Class mClient;	// 4 = 0x4
	OAXDrawingState *mOAXState;	// 8 = 0x8
	OCPPackagePart *mPackagePart;	// 12 = 0xc
	NSMutableDictionary *mShapeTypes;	// 16 = 0x10
	NSMutableDictionary *mShapeIdMap;	// 20 = 0x14
	NSMutableSet *mDualDrawables;	// 24 = 0x18
}
@property(retain) id packagePart;	// G=0x310f1075; S=0x310e8159; converted property
- (id)initWithClient:(Class)client packagePart:(id)part;	// 0x310dd921
- (void)addDualDrawable:(id)drawable;	// 0x31160dc1
- (id)blipRefForURL:(id)url;	// 0x3115f829
- (Class)client;	// 0x310f8511
- (void)dealloc;	// 0x310fb4c5
- (id)drawableForVmlShapeId:(id)vmlShapeId;	// 0x31160d65
- (BOOL)isDualDrawable:(id)drawable;	// 0x31160f21
- (id)oaxState;	// 0x31259f55
- (unsigned long)officeArtShapeIdWithVmlShapeId:(id)vmlShapeId;	// 0x310f65f9
// converted property getter: - (id)packagePart;	// 0x310f1075
- (void)reset;	// 0x3110ff65
- (void)setDrawable:(id)drawable forVmlShapeId:(id)vmlShapeId;	// 0x310f6419
- (void)setOAXState:(id)state;	// 0x310dda99
// converted property setter: - (void)setPackagePart:(id)part;	// 0x310e8159
- (void)setShapeType:(unsigned short)type forId:(id)anId;	// 0x310faa89
- (unsigned short)shapeTypeForId:(id)anId;	// 0x310faad5
@end
