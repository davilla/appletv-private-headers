/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVSearchAgent.h"

@class NSString;

@interface ATVMusicStoreSearchAgent : ATVSearchAgent {
@private
	NSString *_baseURLString;	// 12 = 0xc
}
- (id)initWithBaseURLString:(id)baseURLString;	// 0x336c1401
- (void)_loadSearchURL:(id)url forSearchTerm:(id)searchTerm;	// 0x336c125d
- (void)_searchComplete:(id)complete forSearchTerm:(id)searchTerm;	// 0x336c1069
- (void)_searchRequestProcessed:(id)processed;	// 0x336c10fd
- (void)dealloc;	// 0x336c1391
- (BOOL)isNetworkDependent;	// 0x336c1065
- (void)search:(id)search ignoringCache:(BOOL)cache;	// 0x336c1451
- (BOOL)showRecentSearches;	// 0x336c1061
@end

