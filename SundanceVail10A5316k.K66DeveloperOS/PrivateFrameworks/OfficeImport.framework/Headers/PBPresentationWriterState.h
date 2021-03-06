/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class TSUNoCopyDictionary, NSMutableDictionary, PBOfficeArtWriterState, ESDContainer, ESDObject, ESDRoot, PDPresentation, PDSlideBase;
@protocol OCCancelDelegate;

__attribute__((visibility("hidden")))
@interface PBPresentationWriterState : NSObject {
@private
	PBOfficeArtWriterState *mOfficeArtState;	// 4 = 0x4
	PDPresentation *mSrcPresentation;	// 8 = 0x8
	OcSummary *mTgtSummary;	// 12 = 0xc
	ESDRoot *mTgtDocumentRoot;	// 16 = 0x10
	ESDRoot *mTgtPicturesRoot;	// 20 = 0x14
	ESDContainer *mTgtMasterSlideListHolder;	// 24 = 0x18
	ESDContainer *mTgtRegularSlideListHolder;	// 28 = 0x1c
	ESDContainer *mTgtNotesSlideListHolder;	// 32 = 0x20
	CFDictionaryRef mSrcFontNameToTgtFontIndexMap;	// 36 = 0x24
	ESDContainer *mTgtFontCollectionHolder;	// 40 = 0x28
	PptDocumentAtom *mTgtDocumentAtom;	// 44 = 0x2c
	ESDObject *mTgtObjectListAtomHolder;	// 48 = 0x30
	ESDObject *mTgtSoundCollectionAtomHolder;	// 52 = 0x34
	ESDContainer *mTgtBinaryTagData9;	// 56 = 0x38
	NSMutableDictionary *mTgtDocProgTagDatas;	// 60 = 0x3c
	vector<PBWriterMasterStyleInfo, std::allocator<PBWriterMasterStyleInfo> > *mDocMasterStyleInfoVector;	// 64 = 0x40
	PDSlideBase *mCurrentSrcSlideBase;	// 68 = 0x44
	hash_map<PDSlideBase *, PBWriterMasterSlideInfo, PBPointerHash, std::equal_to<PDSlideBase *>, std::allocator<PBWriterMasterSlideInfo> > *mSrcSlideMasterOrLayoutInfoMap;	// 72 = 0x48
	PBWriterMasterSlideInfo *mCurrentMasterSlideInfo;	// 76 = 0x4c
	id<OCCancelDelegate> mCancel;	// 80 = 0x50
	TSUNoCopyDictionary *mTransitionMap;	// 84 = 0x54
	TSUNoCopyDictionary *mEntranceBuildMap;	// 88 = 0x58
	TSUNoCopyDictionary *mExitBuildMap;	// 92 = 0x5c
}
@property(retain, nonatomic) id<OCCancelDelegate> cancelDelegate;	// G=0x3127b9e9; S=0x3127b9f9; @synthesize=mCancel
@property(assign) PDSlideBase *currentSourceSlideBase;	// G=0x3127b3c1; S=0x3127b3d1; 
@property(retain, nonatomic) TSUNoCopyDictionary *entranceBuildMap;	// G=0x3127b9a9; S=0x3127b9b9; @synthesize=mEntranceBuildMap
@property(retain, nonatomic) TSUNoCopyDictionary *exitBuildMap;	// G=0x3127b9c9; S=0x3127b9d9; @synthesize=mExitBuildMap
@property(readonly, assign) PBOfficeArtWriterState *officeArtState;	// G=0x3127b815; @synthesize=mOfficeArtState
@property(readonly, assign) PDPresentation *sourcePresentation;	// G=0x3127b7bd; @synthesize=mSrcPresentation
@property(assign) PptDocumentAtom *targetDocumentAtom;	// G=0x3127b8d9; S=0x3127b8ed; @synthesize=mTgtDocumentAtom
@property(retain) ESDRoot *targetDocumentRoot;	// G=0x3127b7d1; S=0x3127b7e5; @synthesize=mTgtDocumentRoot
@property(assign) ESDContainer *targetFontCollectionHolder;	// G=0x3127b8ad; S=0x3127b8c1; @synthesize=mTgtFontCollectionHolder
@property(assign) ESDContainer *targetMasterSlideListHolder;	// G=0x3127b829; S=0x3127b83d; @synthesize=mTgtMasterSlideListHolder
@property(assign) ESDContainer *targetNotesSlideListHolder;	// G=0x3127b881; S=0x3127b895; @synthesize=mTgtNotesSlideListHolder
@property(assign) ESDObject *targetObjectListAtomHolder;	// G=0x3127b905; S=0x3127b919; @synthesize=mTgtObjectListAtomHolder
@property(retain, nonatomic) ESDRoot *targetPicturesRoot;	// G=0x3127b7f5; S=0x3127b805; @synthesize=mTgtPicturesRoot
@property(assign) ESDContainer *targetRegularSlideListHolder;	// G=0x3127b855; S=0x3127b869; @synthesize=mTgtRegularSlideListHolder
@property(assign) ESDObject *targetSoundCollectionAtomHolder;	// G=0x3127b931; S=0x3127b945; @synthesize=mTgtSoundCollectionAtomHolder
@property(assign) OcSummary *targetSummary;	// G=0x3127b95d; S=0x3127b971; @synthesize=mTgtSummary
@property(retain, nonatomic) TSUNoCopyDictionary *transitionMap;	// G=0x3127b989; S=0x3127b999; @synthesize=mTransitionMap
- (id)initWithSourcePresentation:(id)sourcePresentation;	// 0x3127acd9
// declared property getter: - (id)cancelDelegate;	// 0x3127b9e9
- (PBWriterMasterSlideInfo *)currentMasterSlideInfo;	// 0x3127b771
// declared property getter: - (id)currentSourceSlideBase;	// 0x3127b3c1
- (void)dealloc;	// 0x3127aef5
- (PBWriterMasterStyleInfo *)docTargetMasterStyleInfoOfType:(int)type;	// 0x3127b781
// declared property getter: - (id)entranceBuildMap;	// 0x3127b9a9
// declared property getter: - (id)exitBuildMap;	// 0x3127b9c9
- (BOOL)isCancelled;	// 0x3127b799
// declared property getter: - (id)officeArtState;	// 0x3127b815
// declared property setter: - (void)setCancelDelegate:(id)delegate;	// 0x3127b9f9
// declared property setter: - (void)setCurrentSourceSlideBase:(id)base;	// 0x3127b3d1
// declared property setter: - (void)setEntranceBuildMap:(id)map;	// 0x3127b9b9
// declared property setter: - (void)setExitBuildMap:(id)map;	// 0x3127b9d9
- (void)setTargetDocProgTagData:(id)data withName:(const unsigned short *)name;	// 0x3127b1b5
// declared property setter: - (void)setTargetDocumentAtom:(PptDocumentAtom *)atom;	// 0x3127b8ed
// declared property setter: - (void)setTargetDocumentRoot:(id)root;	// 0x3127b7e5
// declared property setter: - (void)setTargetFontCollectionHolder:(id)holder;	// 0x3127b8c1
// declared property setter: - (void)setTargetMasterSlideListHolder:(id)holder;	// 0x3127b83d
// declared property setter: - (void)setTargetNotesSlideListHolder:(id)holder;	// 0x3127b895
// declared property setter: - (void)setTargetObjectListAtomHolder:(id)holder;	// 0x3127b919
// declared property setter: - (void)setTargetPicturesRoot:(id)root;	// 0x3127b805
// declared property setter: - (void)setTargetRegularSlideListHolder:(id)holder;	// 0x3127b869
// declared property setter: - (void)setTargetSoundCollectionAtomHolder:(id)holder;	// 0x3127b945
// declared property setter: - (void)setTargetSummary:(OcSummary *)summary;	// 0x3127b971
// declared property setter: - (void)setTransitionMap:(id)map;	// 0x3127b999
// declared property getter: - (id)sourcePresentation;	// 0x3127b7bd
- (id)targetDocProgTagDataWithName:(const unsigned short *)name;	// 0x3127b129
// declared property getter: - (PptDocumentAtom *)targetDocumentAtom;	// 0x3127b8d9
// declared property getter: - (id)targetDocumentRoot;	// 0x3127b7d1
// declared property getter: - (id)targetFontCollectionHolder;	// 0x3127b8ad
- (unsigned short)targetIndexForSourceFontName:(id)sourceFontName;	// 0x3127b23d
// declared property getter: - (id)targetMasterSlideListHolder;	// 0x3127b829
// declared property getter: - (id)targetNotesSlideListHolder;	// 0x3127b881
// declared property getter: - (id)targetObjectListAtomHolder;	// 0x3127b905
- (id)targetOutlineTextFormatContainerWithProgTagName:(const unsigned short *)progTagName;	// 0x3127b1e9
// declared property getter: - (id)targetPicturesRoot;	// 0x3127b7f5
// declared property getter: - (id)targetRegularSlideListHolder;	// 0x3127b855
// declared property getter: - (id)targetSoundCollectionAtomHolder;	// 0x3127b931
// declared property getter: - (OcSummary *)targetSummary;	// 0x3127b95d
// declared property getter: - (id)transitionMap;	// 0x3127b989
@end

