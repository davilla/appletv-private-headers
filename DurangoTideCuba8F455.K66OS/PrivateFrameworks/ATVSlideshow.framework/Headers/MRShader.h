/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, MRContext, NSString, NSMutableDictionary;

@interface MRShader : NSObject {
	NSString *mShaderID;	// 4 = 0x4
	NSDictionary *mDescription;	// 8 = 0x8
	MRContext *mContext;	// 12 = 0xc
	unsigned mProgram;	// 16 = 0x10
	unsigned mVertexShader;	// 20 = 0x14
	unsigned mFragmentShader;	// 24 = 0x18
	NSMutableDictionary *mUniformLocations;	// 28 = 0x1c
	NSMutableDictionary *mAttributeLocations;	// 32 = 0x20
}
@property(readonly, assign) unsigned program;	// G=0x33d88881; @synthesize=mProgram
@property(readonly, assign) NSString *shaderID;	// G=0x33d88871; @synthesize=mShaderID
- (id)initWithShaderID:(id)shaderID description:(id)description vertexShader:(unsigned)shader andFragmentShader:(unsigned)shader4 inContext:(id)context;	// 0x33d88311
- (void)dealloc;	// 0x33d884a5
- (int)locationForAttribute:(id)attribute;	// 0x33d88715
- (int)locationForCoordinatesOfTexture:(unsigned)texture;	// 0x33d88851
- (int)locationForMatrixOfTexture:(unsigned)texture;	// 0x33d88831
- (int)locationForSizeOfTexture:(unsigned)texture;	// 0x33d887e1
- (int)locationForTexture:(unsigned)texture;	// 0x33d887c1
- (int)locationForUniform:(id)uniform;	// 0x33d88669
// declared property getter: - (unsigned)program;	// 0x33d88881
// declared property getter: - (id)shaderID;	// 0x33d88871
@end

