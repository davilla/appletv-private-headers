/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"
#import "CMMapperRoot.h"
#import "OfficeImport-Structs.h"

@class NSMutableArray, EDWorkbook, OIXMLDocument, OIXMLElement, NSString, CMArchiveManager;

__attribute__((visibility("hidden")))
@interface EMWorkbookMapper : CMMapper <CMMapperRoot> {
@private
	unsigned mRealSheetCount;	// 8 = 0x8
	int mWidth;	// 12 = 0xc
	int mHeight;	// 16 = 0x10
	EDWorkbook *edWorkbook;	// 20 = 0x14
	NSMutableArray *mWorksheetUrls;	// 24 = 0x18
	NSMutableArray *mWorksheetNames;	// 28 = 0x1c
	NSMutableArray *mWorksheetGuids;	// 32 = 0x20
	NSString *mResourceUrlPrefix;	// 36 = 0x24
	NSString *mResourceUrlProtocol;	// 40 = 0x28
	NSString *mStyleSheetGuid;	// 44 = 0x2c
	CMArchiveManager *mArchiver;	// 48 = 0x30
	NSString *mFileName;	// 52 = 0x34
	unsigned mSheetIndex;	// 56 = 0x38
	bool mIsFirstMappedSheet;	// 60 = 0x3c
	bool mIsFrameset;	// 61 = 0x3d
	OIXMLDocument *mXhtmlDoc;	// 64 = 0x40
	OIXMLElement *mBodyElement;	// 68 = 0x44
	OIXMLDocument *mTabBarDoc;	// 72 = 0x48
	NSString *mTabBarURL;	// 76 = 0x4c
	NSMutableArray *mSheetURLs;	// 80 = 0x50
	float mTabPosition;	// 84 = 0x54
	unsigned mNumberOfMappedSheets;	// 88 = 0x58
	BOOL mHasPushedHeader;	// 92 = 0x5c
	BOOL mHasPushedFirstSheet;	// 93 = 0x5d
	BOOL mLoadingMessageVisible;	// 94 = 0x5e
}
@property(retain) id fileName;	// G=0x32cc90a1; S=0x32c05c91; converted property
+ (id)baseDate;	// 0x32c088e1
+ (id)borderStyleCache;	// 0x32b0dd31
+ (id)borderWidthCache;	// 0x32b0e00d
+ (id)cssStyleCache;	// 0x32cc93b5
+ (void)setBaseDate1904:(BOOL)a1904;	// 0x32c05c09
- (id)initWithEDWorkbook:(id)edworkbook archiver:(id)archiver;	// 0x32c059b1
- (id)_createMainPageAndReturnFront;	// 0x32c091cd
- (id)_createStringForSheet:(id)sheet atIndex:(unsigned)index withState:(id)state andMapper:(id)mapper;	// 0x32b09031
- (id)_mainPageBack;	// 0x32b128a9
- (void)_pushTabForSheet:(id)sheet atIndex:(unsigned)index;	// 0x32cc90b1
- (id)archiver;	// 0x32b0e3cd
- (id)blipAtIndex:(unsigned)index;	// 0x32c0a8e9
- (id)createSheetMapperWithEdSheet:(id)edSheet;	// 0x32b08ded
- (void)dealloc;	// 0x32b15cb5
- (id)documentTitle;	// 0x32b102a1
// converted property getter: - (id)fileName;	// 0x32cc90a1
- (void)finishMappingWithState:(id)state;	// 0x32b1282d
- (BOOL)hasMultipleSheets;	// 0x32b10d1d
- (bool)isMultiPage;	// 0x32cc938d
- (void)mapBodyStyleAt:(id)at;	// 0x32b0951d
- (void)mapElement:(id)element atIndex:(unsigned)index withState:(id)state isLastElement:(BOOL)element4;	// 0x32b087ad
- (CGSize)pageSizeForDevice;	// 0x32cc92dd
// converted property setter: - (void)setFileName:(id)name;	// 0x32c05c91
- (void)startMappingWithState:(id)state;	// 0x32c05ccd
- (id)styleMatrix;	// 0x32cc934d
- (id)workbook;	// 0x32b0a89d
@end
