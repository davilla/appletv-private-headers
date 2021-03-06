/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ATVSearchAgent : XXUnknownSuperclass {
	NSMutableDictionary *_resultsCache;	// 4 = 0x4
	NSMutableArray *_resultsCacheTerms;	// 8 = 0x8
}
+ (id)_searchTermCache;	// 0x211edd
- (id)init;	// 0x2114e1
- (void)cacheResults:(id)results forSearchTerm:(id)searchTerm;	// 0x211b89
- (long)cacheSize;	// 0x211ec9
- (id)cachedResultsForSearchTerm:(id)searchTerm;	// 0x211de5
- (void)clearSavedSearchTerms;	// 0x2116e1
- (id)contextMenuUtility;	// 0x211ed5
- (void)dealloc;	// 0x211561
- (BOOL)handlePlayForObject:(id)object;	// 0x211ed9
- (BOOL)isNetworkDependent;	// 0x211ed1
- (void)purgeCache;	// 0x211da5
- (void)saveSearchTerm:(id)term;	// 0x2117dd
- (id)savedSearchTerms;	// 0x2115c5
- (void)search:(id)search;	// 0x211eb1
- (void)search:(id)search ignoringCache:(BOOL)cache;	// 0x211ec5
- (BOOL)showRecentSearches;	// 0x211ecd
@end

