NAME

cp - copy files and directories
SYNOPSIS

cp [OPTION]... SOURCE DEST 
cp [OPTION]... SOURCE... DIRECTORY 
cp [OPTION]... --target-directory=DIRECTORY SOURCE...
DESCRIPTION

Copy SOURCE to DEST, or multiple SOURCE(s) to DIRECTORY.

Mandatory arguments to long options are mandatory for short options too.

-a, --archive
same as -dpR
--backup[=CONTROL]
make a backup of each existing destination file
-b
like --backup but does not accept an argument
--copy-contents
copy contents of special files when recursive
-d
same as --no-dereference --preserve=link
--no-dereference
never follow symbolic links
-f, --force
if an existing destination file cannot be opened, remove it and try again
-i, --interactive
prompt before overwrite
-H
follow command-line symbolic links
-l, --link
link files instead of copying
-L, --dereference
always follow symbolic links
-p
same as --preserve=mode,ownership,timestamps
--preserve[=ATTR_LIST]
preserve the specified attributes (default: mode,ownership,timestamps), if possible additional attributes: links, all
--no-preserve=ATTR_LIST
don't preserve the specified attributes
Ads
4 reasons why Mac is slow
macpaw.com/Slow_Mac
Wondering why your Mac is getting slow over the time? Learn more now.
Free JPEG Converter
www.nchsoftware.com/pixillion
Easily convert image files to or from jpg with this free software
Content Delivery Network
cdn77.com/Free-Trial
Highest Quality CDN (SSD only). Content Delivery for only $49 / TB!
--parents
append source path to DIRECTORY
-P
same as `--no-dereference'
-R, -r, --recursive
copy directories recursively
--remove-destination
remove each existing destination file before attempting to open it (contrast with --force)
--reply={yes,no,query}
specify how to handle the prompt about an existing destination file
--sparse=WHEN
control creation of sparse files
--strip-trailing-slashes remove any trailing slashes from each SOURCE
argument
-s, --symbolic-link
make symbolic links instead of copying
-S, --suffix=SUFFIX
override the usual backup suffix
--target-directory=DIRECTORY
move all SOURCE arguments into DIRECTORY
-u, --update
copy only when the SOURCE file is newer than the destination file or when the destination file is missing
-v, --verbose
explain what is being done
-x, --one-file-system
stay on this file system
--help
display this help and exit
--version
output version information and exit
By default, sparse SOURCE files are detected by a crude heuristic and the corresponding DEST file is made sparse as well. That is the behavior selected by --sparse=auto. Specify --sparse=always to create a sparse DEST file whenever the SOURCE file contains a long enough sequence of zero bytes. Use --sparse=never to inhibit creation of sparse files.

The backup suffix is `~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX. The version control method may be selected via the --backup option or through the VERSION_CONTROL environment variable. Here are the values:

none, off
never make backups (even if --backup is given)
numbered, t
make numbered backups
existing, nil
numbered if numbered backups exist, simple otherwise
simple, never
always make simple backups
As a special case, cp makes a backup of SOURCE when the force and backup options are given and SOURCE and DEST are the same name for an existing, regular file.

SEE ALSO

The full documentation for cp is maintained as a Texinfo manual. If the info and cp programs are properly installed at your site, the command
info cp
should give you access to the complete manual.