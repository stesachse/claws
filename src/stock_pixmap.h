/*
 * Sylpheed -- a GTK+ based, lightweight, and fast e-mail client
 * Copyright (C) 1999-2007 Hiroyuki Yamamoto and the Claws Mail team
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#ifndef __STOCK_PIXMAP_H__
#define __STOCK_PIXMAP_H__

#include <glib.h>
#include <gtk/gtkwidget.h>

typedef enum
{
	STOCK_PIXMAP_ADDR_ONE,
	STOCK_PIXMAP_ADDR_TWO,
	STOCK_PIXMAP_ADDRESS,
	STOCK_PIXMAP_ADDRESS_BOOK,
	STOCK_PIXMAP_ADDRESS_SEARCH,
	STOCK_PIXMAP_BOOK,
	STOCK_PIXMAP_CATEGORY,
	STOCK_PIXMAP_CHECKBOX_OFF,
	STOCK_PIXMAP_CHECKBOX_ON,
	STOCK_PIXMAP_CHECK_SPELLING,
	STOCK_PIXMAP_CLIP,
	STOCK_PIXMAP_CLIP_KEY,
	STOCK_PIXMAP_CLIP_GPG_SIGNED,
	STOCK_PIXMAP_CLOSE,
	STOCK_PIXMAP_COMPLETE,
	STOCK_PIXMAP_CONTINUE,
	STOCK_PIXMAP_DELETED,
	STOCK_PIXMAP_DIR_CLOSE,
	STOCK_PIXMAP_DIR_CLOSE_HRM,
	STOCK_PIXMAP_DIR_OPEN,
	STOCK_PIXMAP_DIR_OPEN_HRM,
	STOCK_PIXMAP_DIR_CLOSE_MARK,
	STOCK_PIXMAP_DIR_CLOSE_HRM_MARK,
	STOCK_PIXMAP_DIR_OPEN_MARK,
	STOCK_PIXMAP_DIR_OPEN_HRM_MARK,
	STOCK_PIXMAP_DOWN_ARROW,
	STOCK_PIXMAP_UP_ARROW,
	STOCK_PIXMAP_EDIT_EXTERN,
	STOCK_PIXMAP_ERROR,
	STOCK_PIXMAP_EXEC,
	STOCK_PIXMAP_FORWARDED,
	STOCK_PIXMAP_GROUP,
	STOCK_PIXMAP_IGNORETHREAD,
	STOCK_PIXMAP_INBOX_CLOSE,
	STOCK_PIXMAP_INBOX_CLOSE_HRM,
	STOCK_PIXMAP_INBOX_OPEN,
	STOCK_PIXMAP_INBOX_OPEN_HRM,
	STOCK_PIXMAP_INBOX_CLOSE_MARK,
	STOCK_PIXMAP_INBOX_CLOSE_HRM_MARK,
	STOCK_PIXMAP_INBOX_OPEN_MARK,
	STOCK_PIXMAP_INBOX_OPEN_HRM_MARK,
	STOCK_PIXMAP_INSERT_FILE,
	STOCK_PIXMAP_INTERFACE,
	STOCK_PIXMAP_JPILOT,
	STOCK_PIXMAP_KEY,
	STOCK_PIXMAP_LDAP,
	STOCK_PIXMAP_LINEWRAP_CURRENT,
	STOCK_PIXMAP_LINEWRAP_ALL,
	STOCK_PIXMAP_LOCKED,
	STOCK_PIXMAP_MAIL,
	STOCK_PIXMAP_MAIL_ATTACH,
	STOCK_PIXMAP_MAIL_COMPOSE,
	STOCK_PIXMAP_MAIL_FORWARD,
	STOCK_PIXMAP_MAIL_RECEIVE,
	STOCK_PIXMAP_MAIL_RECEIVE_ALL,
	STOCK_PIXMAP_MAIL_REPLY,
	STOCK_PIXMAP_MAIL_REPLY_TO_ALL,
	STOCK_PIXMAP_MAIL_REPLY_TO_AUTHOR,
	STOCK_PIXMAP_MAIL_SEND,
	STOCK_PIXMAP_MAIL_SEND_QUEUE,
	STOCK_PIXMAP_MAIL_SIGN,
	STOCK_PIXMAP_MARK,
	STOCK_PIXMAP_NEW,
	STOCK_PIXMAP_NEWS_COMPOSE,
	STOCK_PIXMAP_OUTBOX_CLOSE,
	STOCK_PIXMAP_OUTBOX_CLOSE_HRM,
	STOCK_PIXMAP_OUTBOX_OPEN,
	STOCK_PIXMAP_OUTBOX_OPEN_HRM,
	STOCK_PIXMAP_OUTBOX_CLOSE_MARK,
	STOCK_PIXMAP_OUTBOX_CLOSE_HRM_MARK,
	STOCK_PIXMAP_OUTBOX_OPEN_MARK,
	STOCK_PIXMAP_OUTBOX_OPEN_HRM_MARK,
	STOCK_PIXMAP_REPLIED,
	STOCK_PIXMAP_PASTE,
	STOCK_PIXMAP_PREFERENCES,
	STOCK_PIXMAP_PROPERTIES,
	STOCK_PIXMAP_QUEUE_CLOSE,
	STOCK_PIXMAP_QUEUE_CLOSE_HRM,
	STOCK_PIXMAP_QUEUE_OPEN,
	STOCK_PIXMAP_QUEUE_OPEN_HRM,
	STOCK_PIXMAP_TRASH_OPEN,
	STOCK_PIXMAP_TRASH_OPEN_HRM,
	STOCK_PIXMAP_TRASH_CLOSE,
	STOCK_PIXMAP_TRASH_CLOSE_HRM,
	STOCK_PIXMAP_QUEUE_CLOSE_MARK,
	STOCK_PIXMAP_QUEUE_CLOSE_HRM_MARK,
	STOCK_PIXMAP_QUEUE_OPEN_MARK,
	STOCK_PIXMAP_QUEUE_OPEN_HRM_MARK,
	STOCK_PIXMAP_TRASH_OPEN_MARK,
	STOCK_PIXMAP_TRASH_OPEN_HRM_MARK,
	STOCK_PIXMAP_TRASH_CLOSE_MARK,
	STOCK_PIXMAP_TRASH_CLOSE_HRM_MARK,
	STOCK_PIXMAP_UNREAD,
	STOCK_PIXMAP_VCARD,
	STOCK_PIXMAP_ONLINE,
	STOCK_PIXMAP_OFFLINE,
	STOCK_PIXMAP_NOTICE_WARN,		/* small warning */
	STOCK_PIXMAP_NOTICE_ERROR,		/* small error   */
	STOCK_PIXMAP_NOTICE_NOTE,		/* small message */
	STOCK_PIXMAP_QUICKSEARCH,		/* quicksearch pixmap */
	STOCK_PIXMAP_GPG_SIGNED,
	STOCK_PIXMAP_DRAFTS_CLOSE,
	STOCK_PIXMAP_DRAFTS_OPEN,
	STOCK_PIXMAP_DRAFTS_CLOSE_MARK,
	STOCK_PIXMAP_DRAFTS_OPEN_MARK,
	STOCK_PIXMAP_MIME_TEXT_PLAIN,
	STOCK_PIXMAP_MIME_TEXT_HTML,
	STOCK_PIXMAP_MIME_APPLICATION,
	STOCK_PIXMAP_MIME_IMAGE,
	STOCK_PIXMAP_MIME_AUDIO,
	STOCK_PIXMAP_MIME_TEXT_ENRICHED,
	STOCK_PIXMAP_MIME_UNKNOWN,
	STOCK_PIXMAP_MIME_PDF,
	STOCK_PIXMAP_MIME_PS,
	STOCK_PIXMAP_MIME_TEXT_CALENDAR,
	STOCK_PIXMAP_MIME_PGP_SIG,
	STOCK_PIXMAP_PRIVACY_SIGNED,
	STOCK_PIXMAP_PRIVACY_PASSED,
	STOCK_PIXMAP_PRIVACY_FAILED,
	STOCK_PIXMAP_PRIVACY_UNKNOWN,
	STOCK_PIXMAP_PRIVACY_EXPIRED,
	STOCK_PIXMAP_PRIVACY_WARN,
	STOCK_PIXMAP_PRIVACY_EMBLEM_ENCRYPTED,
	STOCK_PIXMAP_PRIVACY_EMBLEM_SIGNED,
	STOCK_PIXMAP_PRIVACY_EMBLEM_PASSED,
	STOCK_PIXMAP_PRIVACY_EMBLEM_FAILED,
	STOCK_PIXMAP_PRIVACY_EMBLEM_WARN,
	STOCK_PIXMAP_MIME_MESSAGE,
	STOCK_PIXMAP_CLAWS_MAIL_ICON,
	STOCK_PIXMAP_READ,
	STOCK_PIXMAP_TRASH,
	STOCK_PIXMAP_CLAWS_MAIL_LOGO,
	STOCK_PIXMAP_DIR_NOSELECT, 
	STOCK_PIXMAP_SPAM,
	STOCK_PIXMAP_SPAM_BTN,
	STOCK_PIXMAP_HAM_BTN,
	STOCK_PIXMAP_MOVED,
	STOCK_PIXMAP_COPIED,
	STOCK_PIXMAP_ACTIVE,
	STOCK_PIXMAP_INACTIVE,
	STOCK_PIXMAP_EMPTY,              /* last entry */
	N_STOCK_PIXMAPS
} StockPixmap;

typedef enum {
	OVERLAY_NONE,
	OVERLAY_TOP_LEFT,
	OVERLAY_TOP_CENTER,
	OVERLAY_TOP_RIGHT,
	OVERLAY_MID_LEFT,
	OVERLAY_MID_CENTER,
	OVERLAY_MID_RIGHT,
	OVERLAY_BOTTOM_LEFT,
	OVERLAY_BOTTOM_CENTER,
	OVERLAY_BOTTOM_RIGHT
} OverlayPosition;

GtkWidget *stock_pixmap_widget	(GtkWidget	 *window,
				 StockPixmap	  icon);
gint stock_pixbuf_gdk		(GtkWidget *window, StockPixmap icon, 
				 GdkPixbuf **pixbuf);
gint stock_pixmap_gdk		(GtkWidget	 *window,
				 StockPixmap	  icon,
				 GdkPixmap	**pixmap,
				 GdkBitmap	**mask);

GList *stock_pixmap_themes_list_new	(void);
void stock_pixmap_themes_list_free	(GList *list);
gchar *stock_pixmap_get_name         (StockPixmap icon);
StockPixmap stock_pixmap_get_icon    (gchar *file);
GtkWidget *stock_pixmap_widget_with_overlay (GtkWidget		*window,
					     StockPixmap	 icon,
					     StockPixmap	 overlay,
					     OverlayPosition	 pos,
					     gint		 border_x,
					     gint		 border_y);

#endif /* __STOCK_PIXMAP_H__ */
