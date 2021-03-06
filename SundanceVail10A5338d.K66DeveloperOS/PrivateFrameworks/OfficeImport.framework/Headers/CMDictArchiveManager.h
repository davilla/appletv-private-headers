/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMArchiveManager.h"

@class NSMutableString, NSMutableDictionary, NSString;

@interface CMDictArchiveManager : CMArchiveManager {
	NSMutableString *mCssString;	// 44 = 0x2c
	NSMutableDictionary *mStyleCache;	// 48 = 0x30
	NSMutableDictionary *mResources;	// 52 = 0x34
	NSString *mPrefix;	// 56 = 0x38
	NSString *mResourceUrlProtocol;	// 60 = 0x3c
	NSMutableString *mMainHtml;	// 64 = 0x40
	NSString *mName;	// 68 = 0x44
	bool mIsFrameset;	// 72 = 0x48
}
- (id)initWithName:(id)name resourcePathPrefix:(id)prefix;	// 0x33b2c335
- (id)addCssStyle:(id)style;	// 0x33b2c8f5
- (void)addCssStyle:(id)style withName:(id)name;	// 0x33b2c9cd
- (id)copyDictionaryWithSizeInfos:(BOOL)sizeInfos;	// 0x33b2c721
- (id)copyResourceWithName:(id)name;	// 0x33b2c50d
- (id)cssStylesheetString;	// 0x33b2cafd
- (void)dealloc;	// 0x33b2c45d
- (id)name;	// 0x33b2c4fd
- (void)pushCssToPath:(id)path;	// 0x33b2ca25
- (void)pushData:(id)data toPath:(id)path;	// 0x33b2c5cd
- (void)pushText:(id)text toPath:(id)path;	// 0x33b2c6a5
- (int)resourceCount;	// 0x33b2c8c5
- (id)resourceUrlProtocol;	// 0x33b2c8e5
- (void)setIsFrameset;	// 0x33b2c4e9
@end

