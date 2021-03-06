/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class WebBookmark;

@interface WebBookmarkCollection : NSObject
{
    struct sqlite3 *_db;
    struct __CFLocale *_locale;
    struct __CFStringTokenizer *_wordTokenizer;
    WebBookmark *_rootBookmark;
    BOOL _merging;
    BOOL _dirty;
}

+ (id)safariDirectoryPath;
+ (id)safariBookmarkCollection;
- (id)initWithPath:(id)arg1;
- (BOOL)_openDatabaseAtPath:(id)arg1 error:(id *)arg2;
- (id)initWithPath:(id)arg1 migratingBookmarksPlist:(id)arg2 syncAnchorPlist:(id)arg3;
- (void)dealloc;
- (BOOL)vacuum;
- (void)localeSettingsChanged;
- (id)bookmarkWithID:(unsigned int)arg1;
- (id)bookmarkWithUUID:(id)arg1;
- (id)bookmarksBarBookmark;
- (id)readingListFolder;
- (id)bookmarkAtPath:(id)arg1;
- (id)rootBookmark;
- (id)subfoldersOfID:(unsigned int)arg1;
- (id)listWithID:(unsigned int)arg1;
- (id)listWithSpecialID:(unsigned int)arg1;
- (id)listWithID:(unsigned int)arg1 skipOffset:(unsigned int)arg2;
- (id)listWithID:(unsigned int)arg1 skipOffset:(unsigned int)arg2 includeHidden:(BOOL)arg3;
- (id)rootList;
- (id)bookmarksBarList;
- (id)_readingListWithUnreadOnly:(BOOL)arg1;
- (id)readingList;
- (unsigned int)readingListFolderBookmarkID;
- (id)unreadReadingList;
- (id)readingListItemsWithIconData:(BOOL)arg1 unreadOnly:(BOOL)arg2;
- (BOOL)saveBookmark:(id)arg1;
- (BOOL)deleteBookmark:(id)arg1;
- (BOOL)moveBookmark:(id)arg1 toFolderWithID:(unsigned int)arg2;
- (BOOL)_moveBookmark:(id)arg1 toIndex:(unsigned int)arg2;
- (BOOL)reorderBookmark:(id)arg1 toIndex:(unsigned int)arg2;
- (BOOL)reorderList:(id)arg1 moveBookmarkAtIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (struct sqlite3_stmt *)_prefixSearch:(id)arg1 usingColumns:(const char *)arg2 maxCount:(unsigned int)arg3;
- (void)retrieveBookmarksMatchingString:(id)arg1 delegate:(id)arg2 userInfo:(void *)arg3;
- (id)bookmarksMatchingString:(id)arg1;
- (id)_bookmarksFromStatementSelectingIDs:(const char *)arg1 withQuery:(id)arg2;
- (id)bookmarksWithTitlesMatchingString:(id)arg1;
- (id)bookmarksWithURLsMatchingString:(id)arg1;
- (id)firstReadingListBookmarkWithURLMatchingString:(id)arg1 prefixMatch:(BOOL)arg2;
- (id)firstReadingListBookmarkWithIconDataWithBaseURL:(id)arg1;
- (unsigned int)indexOfReadingListBookmark:(id)arg1 countingOnlyUnread:(BOOL)arg2;
@property(nonatomic, getter=isMerging) BOOL merging; // @synthesize merging=_merging;

@end

