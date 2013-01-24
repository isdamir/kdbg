/*
 * Copyright Johannes Sixt
 * This file is licensed under the GNU General Public License Version 2.
 * See the file COPYING in the toplevel directory of the source directory.
 */

#ifndef ENVVAR_H
#define ENVVAR_H

/*
 * Description of environment variables. Note that the name of the variable
 * is given as the key in the map, so we don't repeat it here.
 */

class QTreeWidgetItem;

struct EnvVar {
    QString value;
    enum EnvVarStatus { EVclean, EVdirty, EVnew, EVdeleted };
    EnvVarStatus status;
    QTreeWidgetItem* item;
};

#endif // ENVVAR_H
