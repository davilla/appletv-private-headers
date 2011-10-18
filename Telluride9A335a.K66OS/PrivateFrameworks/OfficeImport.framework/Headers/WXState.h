/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class WDDocument, NSMutableArray, SFUNoCopyDictionary, WXOAVState, OCPPackagePart, OAXDrawingState;
@protocol OCCancelDelegate;

__attribute__((visibility("hidden")))
@interface WXState : NSObject {
@private
	WDDocument *mDocument;	// 4 = 0x4
	SFUNoCopyDictionary *mTextNodesToBeAdded;	// 8 = 0x8
	SFUNoCopyDictionary *mMapBookmarkIdToName;	// 12 = 0xc
	SFUNoCopyDictionary *mMapAnnotationIdToAnnotation;	// 16 = 0x10
	OCPPackagePart *mPackagePart;	// 20 = 0x14
	OCPPackagePart *mAnnotationPart;	// 24 = 0x18
	xmlDoc *mFootnoteDocument;	// 28 = 0x1c
	xmlNode *mFootnotes;	// 32 = 0x20
	xmlDoc *mEndnoteDocument;	// 36 = 0x24
	xmlNode *mEndnotes;	// 40 = 0x28
	xmlDoc *mAnnotationDocument;	// 44 = 0x2c
	xmlNode *mAnnotations;	// 48 = 0x30
	NSMutableArray *mDeleteAuthorStack;	// 52 = 0x34
	NSMutableArray *mDeleteDateStack;	// 56 = 0x38
	NSMutableArray *mEditAuthorStack;	// 60 = 0x3c
	NSMutableArray *mEditDateStack;	// 64 = 0x40
	NSMutableArray *mFormatAuthorStack;	// 68 = 0x44
	NSMutableArray *mFormatDateStack;	// 72 = 0x48
	WXOAVState *mWXOavState;	// 76 = 0x4c
	OAXDrawingState *mDrawingState;	// 80 = 0x50
	int mCurrentOfficeArtTextType;	// 84 = 0x54
	BOOL mNewSectionRequested;	// 88 = 0x58
	unsigned long mCurrentRowCNFStyle;	// 92 = 0x5c
	unsigned long mCurrentCellCNFStyle;	// 96 = 0x60
	BOOL mCurrentTableWraps;	// 100 = 0x64
	id<OCCancelDelegate> mCancelDelegate;	// 104 = 0x68
	BOOL mIsThumbnail;	// 108 = 0x6c
}
@property(retain) id annotationPart;	// G=0x353abb61; S=0x353abd45; converted property
@property(retain, nonatomic) id<OCCancelDelegate> cancelDelegate;	// G=0x352be129; S=0x352acc49; @synthesize=mCancelDelegate
@property(assign) unsigned long currentCellCNFStyle;	// G=0x352b8065; S=0x352bf54d; converted property
@property(assign, nonatomic) int currentOfficeArtTextType;	// G=0x352c4f85; S=0x352b9429; @synthesize=mCurrentOfficeArtTextType
@property(assign) unsigned long currentRowCNFStyle;	// G=0x352b8055; S=0x352bf7ad; converted property
@property(assign) BOOL currentTableWraps;	// G=0x352bf7bd; S=0x352b532d; converted property
@property(retain) id document;	// G=0x352b1c09; S=0x352acb2d; converted property
@property(assign) BOOL isThumbnail;	// G=0x353abb81; S=0x353abb71; converted property
@property(assign, getter=isNewSectionRequested) BOOL newSectionRequested;	// G=0x352b7d31; S=0x352be041; converted property
@property(retain) id packagePart;	// G=0x352ac909; S=0x352bd335; converted property
- (id)init;	// 0x352ac59d
- (id)initNoStacksWith:(id)with;	// 0x353ac05d
- (void)addAnnotationID:(long)anId annotation:(id)annotation;	// 0x353abf49
- (void)addBookmarkId:(int)anId name:(id)name;	// 0x352b8df1
- (void)addText:(id)text node:(xmlNode *)node;	// 0x353abf9d
// converted property getter: - (id)annotationPart;	// 0x353abb61
- (id)annotationWithID:(long)anId;	// 0x353abef9
- (id)bookmarkName:(int)name;	// 0x352bc929
// declared property getter: - (id)cancelDelegate;	// 0x352be129
- (void)clearOutNodesToBeAdded:(id)beAdded;	// 0x352b8191
// converted property getter: - (unsigned long)currentCellCNFStyle;	// 0x352b8065
- (id)currentDeleteAuthor;	// 0x352b8f01
- (id)currentDeleteDate;	// 0x352b8f21
- (id)currentEditAuthor;	// 0x352b8f41
- (id)currentEditDate;	// 0x352b8f61
- (id)currentFormatAuthor;	// 0x353abbb1
- (id)currentFormatDate;	// 0x353abb91
// declared property getter: - (int)currentOfficeArtTextType;	// 0x352c4f85
// converted property getter: - (unsigned long)currentRowCNFStyle;	// 0x352b8055
// converted property getter: - (BOOL)currentTableWraps;	// 0x352bf7bd
- (void)dealloc;	// 0x352c6079
// converted property getter: - (id)document;	// 0x352b1c09
- (id)drawingState;	// 0x352ad371
// converted property getter: - (BOOL)isNewSectionRequested;	// 0x352b7d31
// converted property getter: - (BOOL)isThumbnail;	// 0x353abb81
- (id)nodesToBeAdded:(id)beAdded;	// 0x352b8155
// converted property getter: - (id)packagePart;	// 0x352ac909
- (void)popDeleteAuthorDate;	// 0x353abcc9
- (void)popEditAuthorDate;	// 0x353abc4d
- (void)popFormatAuthorDate;	// 0x353abbd1
- (void)pushDeleteAuthor:(id)author date:(id)date;	// 0x353abd05
- (void)pushEditAuthor:(id)author date:(id)date;	// 0x353abc89
- (void)pushFormatAuthor:(id)author date:(id)date;	// 0x353abc0d
// converted property setter: - (void)setAnnotationPart:(id)part;	// 0x353abd45
// declared property setter: - (void)setCancelDelegate:(id)delegate;	// 0x352acc49
// converted property setter: - (void)setCurrentCellCNFStyle:(unsigned long)style;	// 0x352bf54d
// declared property setter: - (void)setCurrentOfficeArtTextType:(int)type;	// 0x352b9429
// converted property setter: - (void)setCurrentRowCNFStyle:(unsigned long)style;	// 0x352bf7ad
// converted property setter: - (void)setCurrentTableWraps:(BOOL)wraps;	// 0x352b532d
// converted property setter: - (void)setDocument:(id)document;	// 0x352acb2d
- (void)setDocumentPart:(id)part;	// 0x352b7035
// converted property setter: - (void)setIsThumbnail:(BOOL)thumbnail;	// 0x353abb71
// converted property setter: - (void)setNewSectionRequested:(BOOL)requested;	// 0x352be041
// converted property setter: - (void)setPackagePart:(id)part;	// 0x352bd335
- (id)wxoavState;	// 0x352b5831
- (xmlNode *)xmlAnnotationWithID:(long)anId;	// 0x353abd85
- (xmlNode *)xmlEndnoteWithID:(long)anId;	// 0x353abe01
- (xmlNode *)xmlFootnoteWithID:(long)anId;	// 0x353abe7d
@end

