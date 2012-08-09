/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQWrapPointGenerator.h"
#import <NSObject.h> // Unknown library

@class GQDRoot, GQSTable, GQDSStylesheet, GQZArchive, GQPProcessor;
@protocol GQUOutputBundle;

@interface GQSDocument : NSObject <GQWrapPointGenerator> {
	GQPProcessor *mProcessor;	// 4 = 0x4
	GQDRoot *mRoot;	// 8 = 0x8
	CFURLRef mBundleUrl;	// 12 = 0xc
	GQZArchive *mArchive;	// 16 = 0x10
	id<GQUOutputBundle> mOutputBundle;	// 20 = 0x14
	CFArrayRef mObjectStack;	// 24 = 0x18
	id mGeneratorState;	// 28 = 0x1c
	GQSTable *mTableState;	// 32 = 0x20
	Class mCurrentDrawablesGenerator;	// 36 = 0x24
	Class mCurrentTableGenerator;	// 40 = 0x28
	id<GQWrapPointGenerator> mCurrentWrapPointGenerator;	// 44 = 0x2c
	BOOL mMustRegisterDrawables;	// 48 = 0x30
	BOOL mGeneratorBeginWasCalled;	// 49 = 0x31
	BOOL mShouldStreamTables;	// 50 = 0x32
	BOOL mDoExternalTextWrap;	// 51 = 0x33
	BOOL mGeneratingThumbnail;	// 52 = 0x34
	BOOL mThumbnailGenerationDone;	// 53 = 0x35
	unsigned mTextScale;	// 56 = 0x38
	set<GQUtility::ObjcSharedPtr<GQDWrapPoint>, GQUtility::NSObjectComparator<GQDWrapPoint>, std::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint>> > *mWrapPoints;	// 60 = 0x3c
	CFDictionaryRef mBundleResourceUriMap;	// 64 = 0x40
	GQDSStylesheet *mStylesheet;	// 68 = 0x44
	BOOL mIsReadingStorageAttachments;	// 72 = 0x48
	CFStringRef mFilename;	// 76 = 0x4c
}
@property(assign) Class currentDrawablesGenerator;	// G=0x3584898d; S=0x3584899d; converted property
@property(assign) Class currentTableGenerator;	// G=0x358489ad; S=0x358489bd; converted property
@property(retain) id currentWrapPointGenerator;	// G=0x35848ea9; S=0x35848eb9; converted property
@property(assign) BOOL doExternalTextWrap;	// G=0x35848a0d; S=0x35848a1d; converted property
@property(assign, getter=isGeneratingThumbnail) BOOL generatingThumbnail;	// G=0x35848a51; S=0x35848a61; converted property
@property(retain) id generatorState;	// G=0x35848941; S=0x35848951; converted property
@property(assign) BOOL isReadingStorageAttachments;	// G=0x35848f25; S=0x35848f15; converted property
@property(assign) BOOL mustRegisterDrawables;	// G=0x358489cd; S=0x358489dd; converted property
@property(assign) BOOL shouldStreamTables;	// G=0x358489ed; S=0x358489fd; converted property
@property(retain) id stylesheet;	// G=0x35848ec9; S=0x35848ed9; converted property
@property(retain) id tableState;	// G=0x358488f5; S=0x35848905; converted property
@property(assign, getter=isThumbnailGenerationDone) BOOL thumbnailGenerationDone;	// G=0x35848a71; S=0x35848a81; converted property
- (id)initWithRoot:(id)root processor:(id)processor archive:(id)archive outputBundle:(id)bundle filename:(CFStringRef)filename;	// 0x35848191
- (id)initWithRoot:(id)root processor:(id)processor bundleUrl:(CFURLRef)url archive:(id)archive outputBundle:(id)bundle;	// 0x358480f9
- (id)initWithRoot:(id)root processor:(id)processor outputBundle:(id)bundle filename:(CFStringRef)filename;	// 0x35847fc9
- (void)addWrapPoint:(id)point;	// 0x35848a91
- (void)clearWrapPoints;	// 0x35848cfd
- (vector<GQUtility::ObjcSharedPtr<GQDWrapPoint>, std::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint>> > *)createListOfWrapPointsAlongY:(float)wrapPointsAlongY minX:(float)x maxX:(float)x3 zIndex:(int)index;	// 0x35848b65
- (CFURLRef)createUriToDocumentBundleResource:(CFStringRef)documentBundleResource;	// 0x3584831d
// converted property getter: - (Class)currentDrawablesGenerator;	// 0x3584898d
// converted property getter: - (Class)currentTableGenerator;	// 0x358489ad
// converted property getter: - (id)currentWrapPointGenerator;	// 0x35848ea9
- (void)dealloc;	// 0x358481d9
// converted property getter: - (BOOL)doExternalTextWrap;	// 0x35848a0d
- (CFStringRef)filename;	// 0x35848f35
- (BOOL)generatorBeginWasCalled;	// 0x35848a2d
// converted property getter: - (id)generatorState;	// 0x35848941
// converted property getter: - (BOOL)isGeneratingThumbnail;	// 0x35848a51
// converted property getter: - (BOOL)isReadingStorageAttachments;	// 0x35848f25
// converted property getter: - (BOOL)isThumbnailGenerationDone;	// 0x35848a71
// converted property getter: - (BOOL)mustRegisterDrawables;	// 0x358489cd
- (int)objectStackDepth;	// 0x358488e1
- (id)outputBundle;	// 0x358487dd
- (id)peekObject;	// 0x358487ed
- (id)popRetainedObject;	// 0x35848875
- (id)processor;	// 0x358482fd
- (void)pushObject:(id)object;	// 0x358488cd
- (id)root;	// 0x3584830d
// converted property setter: - (void)setCurrentDrawablesGenerator:(Class)generator;	// 0x3584899d
// converted property setter: - (void)setCurrentTableGenerator:(Class)generator;	// 0x358489bd
// converted property setter: - (void)setCurrentWrapPointGenerator:(id)generator;	// 0x35848eb9
// converted property setter: - (void)setDoExternalTextWrap:(BOOL)wrap;	// 0x35848a1d
// converted property setter: - (void)setGeneratingThumbnail:(BOOL)thumbnail;	// 0x35848a61
- (void)setGeneratorBeginWasCalled;	// 0x35848a3d
// converted property setter: - (void)setGeneratorState:(id)state;	// 0x35848951
// converted property setter: - (void)setIsReadingStorageAttachments:(BOOL)attachments;	// 0x35848f15
// converted property setter: - (void)setMustRegisterDrawables:(BOOL)drawables;	// 0x358489dd
// converted property setter: - (void)setShouldStreamTables:(BOOL)streamTables;	// 0x358489fd
// converted property setter: - (void)setStylesheet:(id)stylesheet;	// 0x35848ed9
// converted property setter: - (void)setTableState:(id)state;	// 0x35848905
// converted property setter: - (void)setThumbnailGenerationDone:(BOOL)done;	// 0x35848a81
// converted property getter: - (BOOL)shouldStreamTables;	// 0x358489ed
// converted property getter: - (id)stylesheet;	// 0x35848ec9
// converted property getter: - (id)tableState;	// 0x358488f5
- (id)topObjectOfClass:(Class)aClass;	// 0x35848819
- (CFStringRef)uriForBundleResource:(CFStringRef)bundleResource ofType:(CFStringRef)type;	// 0x35848d25
- (const set<GQUtility::ObjcSharedPtr<GQDWrapPoint>, GQUtility::NSObjectComparator<GQDWrapPoint>, std::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint>> > *)wrapPoints;	// 0x35848b55
@end
