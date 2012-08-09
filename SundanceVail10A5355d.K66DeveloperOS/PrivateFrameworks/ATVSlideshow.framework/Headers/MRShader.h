/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSString, MRContext, NSDictionary, NSMutableDictionary;

@interface MRShader : NSObject {
	NSString *mShaderID;	// 4 = 0x4
	NSString *mShaderKey;	// 8 = 0x8
	NSDictionary *mDescription;	// 12 = 0xc
	MRContext *mContext;	// 16 = 0x10
	unsigned mProgram;	// 20 = 0x14
	unsigned mVertexShader;	// 24 = 0x18
	unsigned mFragmentShader;	// 28 = 0x1c
	MRContext *mUseContext;	// 32 = 0x20
	float mModelViewProjectionMatrix[16];	// 36 = 0x24
	float mNormal[3];	// 100 = 0x64
	float mTextureMatrix[4][16];	// 112 = 0x70
	float mForeColor[4];	// 368 = 0x170
	int mModelViewProjectionMatrixLocation;	// 384 = 0x180
	int mNormalLocation;	// 388 = 0x184
	int mTextureMatrixLocation[4];	// 392 = 0x188
	int mForeColorLocation;	// 408 = 0x198
	NSMutableDictionary *mUniformLocations;	// 412 = 0x19c
	NSMutableDictionary *mUniforms;	// 416 = 0x1a0
	NSMutableDictionary *mAttributeLocations;	// 420 = 0x1a4
}
@property(readonly, assign, nonatomic) unsigned program;	// G=0x32154335; @synthesize=mProgram
@property(readonly, assign) NSString *shaderID;	// G=0x3215430d; @synthesize=mShaderID
@property(readonly, assign) NSString *shaderKey;	// G=0x32154321; @synthesize=mShaderKey
@property(retain) MRContext *useContext;	// G=0x32153425; S=0x32153435; 
- (id)initWithShaderID:(id)shaderID shaderKey:(id)key description:(id)description vertexShader:(unsigned)shader andFragmentShader:(unsigned)shader5 inContext:(id)context;	// 0x32152f09
- (int)_locationForUniform:(id)uniform;	// 0x321537cd
- (BOOL)caresAboutForeColor;	// 0x321536e9
- (BOOL)caresAboutNormal;	// 0x32153539
- (void)dealloc;	// 0x32153235
- (int)locationForAttribute:(id)attribute;	// 0x32154259
// declared property getter: - (unsigned)program;	// 0x32154335
- (void)setForeColor:(const float *)color;	// 0x3215372d
- (void)setModelViewProjectionMatrix:(float [16])matrix;	// 0x32153499
- (void)setNormal:(float)normal :(float)arg2 :(float)arg3;	// 0x3215357d
- (void)setTextureMatrix:(float [16])matrix onTextureUnit:(unsigned)unit;	// 0x3215362d
- (void)setUniform:(id)uniform forKey:(id)key;	// 0x32154059
- (void)setUniformFloat:(float)aFloat forKey:(id)key;	// 0x32153985
- (void)setUniformInt:(int)int forKey:(id)key;	// 0x32153881
- (void)setUniformMat3:(float [16])a3 forKey:(id)key;	// 0x32153f11
- (void)setUniformMat4:(float [16])a4 forKey:(id)key;	// 0x32153fb5
- (void)setUniformVec2:(float)a2 :(float)arg2 forKey:(id)key;	// 0x32153aa5
- (void)setUniformVec3:(float)a3 :(float)arg2 :(float)arg3 forKey:(id)key;	// 0x32153c01
- (void)setUniformVec4:(float)a4 :(float)arg2 :(float)arg3 :(float)arg4 forKey:(id)key;	// 0x32153d89
// declared property setter: - (void)setUseContext:(id)context;	// 0x32153435
// declared property getter: - (id)shaderID;	// 0x3215430d
// declared property getter: - (id)shaderKey;	// 0x32154321
// declared property getter: - (id)useContext;	// 0x32153425
@end
